```
#include <iostream>
#include <string>
#include <map>
using namespace std;

string sort_numbers(string numbers) {
    map<int, string> numberMap;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        int num = stoi(numbers.substr(i));
        numberMap[num] = numbers.substr(i, 1);
    }
    string sortedNumbers;
    for (auto it : numberMap) {
        sortedNumbers += it.second + " ";
    }
    return sortedNumbers;
}
```