map<string, int> numberMap = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        temp += numbers[i];
        if (i + 1 >= numbers.length() || numbers[i + 1] != ' ') {
            numVec.push_back(temp);
            temp = "";
        }
    }

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (int i = 0; i < numVec.size(); i++) {
        if (i > 0) {
            result += " ";
        }
        result += numberMap[numVec[i]];
    }

    return result;
}