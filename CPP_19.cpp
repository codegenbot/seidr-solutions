string sort_numbers(string numbers) {
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                   {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                   {"eight", 8}, {"nine", 9}};
    vector<string> numList;
    string temp;
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numList.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    numList.push_back(temp);

    sort(numList.begin(), numList.end());

    string result;
    for (int i = 0; i < numList.size(); i++) {
        if (numberMap.find(numList[i]) != numberMap.end()) {
            result += numList[i];
            if (i < numList.size() - 1) {
                result += " ";
            }
        }
    }

    return result;
}