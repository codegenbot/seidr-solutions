Here is the completed code:

```cpp
#include <algorithm>
string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                 {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                 {"eight", 8}, {"nine", 9}};
    vector<string> numVector;
    string temp = "";
    for (char c : numbers) {
        if (c != ' ') {
            temp += c;
        } else {
            numVector.push_back(temp);
            temp = "";
        }
    }
    numVector.push_back(temp);

    sort(numVector.begin(), numVector.end(),
         [&numMap](string a, string b) {
             return numMap.at(a) < numMap.at(b);
         });

    string result = "";
    for (string s : numVector) {
        result += s + " ";
    }
    return result;
}