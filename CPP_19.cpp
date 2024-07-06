map<string, int> numMap = {
    {"zero", 0}, {"one", 1}, {"two", 2},
    {"three", 3}, {"four", 4}, {"five", 5},
    {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        while (i + 1 <= numbers.length() && !ispunct(numbers[i])) {
            i++;
        }
        if (!numMap.count(temp = numbers.substr(0, i))) break;
        numVec.push_back(temp);
        i--;
    }

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (auto& str : numVec) {
        result += str + " ";
    }

    return result;
}