#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    
    string temp = "";
    for (char c : numbers) {
        if (isdigit(c)) {
            temp += c;
        } else {
            numVec.push_back(temp);
            temp = "";
        }
    }
    numVec.push_back(temp);

    sort(numVec.begin(), numVec.end(), [&numMap](string a, string b) {
        return numMap[a] < numMap[b];
    });

    string result = "";
    for (auto str : numVec) {
        result += str + " ";
    }
    
    return result;
}