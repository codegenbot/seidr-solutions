map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                          {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                          {"eight", 8}, {"nine", 9}};

vector<string> numVector;
string temp;

for (char& c : numbers) {
    if (c == ' ') {
        continue;
    }
    for (auto it = numMap.begin(); it != numMap.end(); ++it) {
        if (it->first.find(c) != string::npos) {
            temp += it->first;
            break;
        }
    }
}

sort(numVector.begin(), numVector.end());

string result = "";
for (const auto& s : numVector) {
    result += s + " ";
}
return result.substr(0, result.size() - 1);