#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        } else if (i == numbers.length() - 1 || numbers[i + 1] != ' ') {
            for (auto it = numMap.begin(); it != numMap.end(); it++) {
                if (it->first.find(numbers.substr(i)) != string::npos) {
                    temp = it->first;
                    break;
                }
            }
            numVec.push_back(temp);
        }
    }

    sort(numVec.begin(), numVec.end());

    return join(numVec, " ");
}

string join(vector<string> vec, string sep) {
    string result = "";
    for (int i = 0; i < vec.size(); i++) {
        if (i > 0)
            result += sep;
        result += vec[i];
    }
    return result;
}