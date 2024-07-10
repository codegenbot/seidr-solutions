map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
string result = "", temp;
for (int i = 0; i < numbers.size(); ++i) {
    if (numbers[i] == ' ') {
        result += temp + " ";
        temp = "";
    } else {
        temp += numbers[i];
    }
}
result += temp;
temp = "";
for (auto& it : num_map) {
    size_t pos;
    while ((pos = result.find(it.first)) != string::npos) {
        temp += it.first + " ";
        result.erase(pos, it.first.size() + 1);
    }
}
return temp;
}