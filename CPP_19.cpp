#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};

    vector<string> numberVec;
    string temp = "";
    for (char c : numbers) {
        if (isdigit(c)) continue;
        if (!temp.empty()) {
            numberVec.push_back(temp);
            temp = "";
        }
        temp += c;
    }
    numberVec.push_back(temp);

    sort(numberVec.begin(), numberVec.end(),
         [&numMap](string a, string b) { return numMap[a] < numMap[b]; });

    string result = "";
    for (auto &str : numberVec)
        result += str + " ";
    return result;
}