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
        temp += numbers[i];
        if (i == numbers.length() - 1 || numbers[i + 1] != ' ') {
            numVector.push_back(temp);
            temp = "";
        }
    }

    sort(numVector.begin(), numVector.end());

    string result = "";
    for (int i = 0; i < numVector.size(); i++) {
        if (numMap.find(numVector[i]) != numMap.end()) {
            result += numVector[i];
            if (i < numVector.size() - 1) {
                result += " ";
            }
        }
    }

    return result;
}