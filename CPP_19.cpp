#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numList;
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    string temp;

    for (char c : numbers) {
        if (c != ' ') {
            temp += c;
        } else {
            numList.push_back(temp);
            temp = "";
        }
    }

    numList.push_back(temp);

    sort(numList.begin(), numList.end(),
        [&numberMap](const string& a, const string& b) {
            return numberMap.at(a) < numberMap.at(b);
        });

    string result;
    for (string s : numList) {
        result += s + " ";
    }

    return result.substr(0, result.size() - 1);
}