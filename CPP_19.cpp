string sort_numbers(string numbers) {
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                  {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                  {"eight", 8}, {"nine", 9}};
    vector<string> numList;
    string num;
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numList.push_back(num);
            num = "";
        } else {
            num += numbers[i];
        }
    }
    numList.push_back(num);

    sort(numList.begin(), numList.end(), [&numberMap](string a, string b) {
        return numberMap[a] < numberMap[b];
    });

    string result;
    for (const auto& num : numList) {
        result += num + " ";
    }
    return result.substr(0, result.length() - 1);
}