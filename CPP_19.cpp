string sort_numbers(string numbers) {
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                   {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                   {"eight", 8}, {"nine", 9}};
    vector<string> numberVec;
    string num;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        for (auto &pair : numberMap) {
            if (numbers.substr(i, pair.first.size()).compare(pair.first) == 0) {
                num = pair.first;
                i += pair.first.size() - 1;
                break;
            }
        }
        numberVec.push_back(num);
    }

    sort(numberVec.begin(), numberVec.end());

    string sortedNumbers = "";
    for (auto &num : numberVec) {
        sortedNumbers += num + " ";
    }
    return sortedNumbers;
}