map<string, int> numMap = {
    {"zero", 0}, {"one", 1}, {"two", 2},
    {"three", 3}, {"four", 4}, {"five", 5},
    {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    vector<string> numVec;
    string num;
    for (char c : numbers) {
        if (c == ' ') {
            numVec.push_back(num);
            num = "";
        } else {
            num += c;
        }
    }
    numVec.push_back(num);

    sort(numVec.begin(), numVec.end(),
         [&numMap](string a, string b) {
             return numMap.at(a) < numMap.at(b);
         });

    string result;
    for (string s : numVec) {
        result += s + " ";
    }
    return result.substr(0, result.length() - 1);
}