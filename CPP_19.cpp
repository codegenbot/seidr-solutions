map<string, int> numberMap = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    vector<string> numArray;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numArray.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    numArray.push_back(temp);

    sort(numArray.begin(), numArray.end());

    string result;
    for (string s : numArray) {
        result += s + " ";
    }

    return result.substr(0, result.length() - 1);
}