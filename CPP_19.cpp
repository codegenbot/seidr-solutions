string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};

    vector<string> numVector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        for (auto it = numMap.begin(); it != numMap.end(); it++) {
            if (it->first.find(string(1, numbers[i])) != string::npos) {
                temp = it->first;
                break;
            }
        }
        numVector.push_back(temp);
    }

    sort(numVector.begin(), numVector.end());

    string result;
    for (auto it = numVector.begin(); it != numVector.end(); it++) {
        result += *it + " ";
    }

    return result.substr(0, result.length() - 1);
}