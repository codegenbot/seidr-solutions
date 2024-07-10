map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
string result = "";
for (int i = 0; i < 10; ++i) {
    for (auto const & [word, value] : number_map) {
        if (value == i) {
            if (numbers.find(word) != string::npos) {
                result += word + " ";
            }
        }
    }
}
result.pop_back(); // Remove last space
return result;
}