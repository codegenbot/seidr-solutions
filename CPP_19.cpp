map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                             {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                             {"eight", 8}, {"nine", 9}};

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVec.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    numVec.push_back(temp);

    sort(numVec.begin(), numVec.end());

    string result;
    for (int i = 0; i < numVec.size(); i++) {
        for (auto it = numMap.begin(); it != numMap.end(); ++it) {
            if (numVec[i] == it->first) {
                if (i > 0) {
                    result += " ";
                }
                result += it->first;
            }
        }
    }

    return result;
}