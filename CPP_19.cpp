#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                   {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                   {"eight", 8}, {"nine", 9}};

    vector<string> numVector;
    string temp = "";
    for (char c : numbers) {
        if (c == ' ') {
            numVector.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    numVector.push_back(temp);

    sort(numVector.begin(), numVector.end(), [&numberMap](string a, string b) {
        return numberMap.at(a) < numberMap.at(b);
    });

    string result = "";
    for (string s : numVector) {
        result += s + " ";
    }

    return result;
}