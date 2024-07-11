using std::string;

std::string sort_numbers(std::string numbers) {
    std::vector<int> numValues;
    std::map<std::string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                        {"eight", 8}, {"nine", 9}};

    std::string numStr;
    for (char c : numbers) {
        if (c == ' ') {
            numValues.push_back(numMap[numStr]);
            numStr = "";
        } else {
            numStr += c;
        }
    }
    numValues.push_back(numMap[numStr]);

    std::sort(numValues.begin(), numValues.end());

    std::string result = "";
    for (int n : numValues) {
        for (auto it = numMap.begin(); it != numMap.end(); ++it) {
            if (n == it->second) {
                result += it->first + " ";
                break;
            }
        }
    }

    return result.substr(0, result.length() - 1);
}