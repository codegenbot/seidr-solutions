```cpp
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

string sort_numbers(string numbers); // Function prototype

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}

string sort_numbers(string numbers) {
    vector<int> numValues;
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};

    string numStr;
    for (char c : numbers) {
        if (c == ' ') {
            numValues.push_back(numMap[numStr]);
            numStr = "";
        } else {
            numStr += c;
        }
    }
    numValues.push_back(numMap[numStr]);

    sort(numValues.begin(), numValues.end());

    string result = "";
    for (int n : numValues) {
        for (auto it = numMap.begin(); it != numMap.end(); ++it) {
            if (n == it->second) {
                result += it->first + " ";
                break;
            }
        }
    }

    return result.substr(0, result.length() - 1);
}