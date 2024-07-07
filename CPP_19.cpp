#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                   {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                   {"eight", 8}, {"nine", 9}};
    vector<string> numVector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (i + 3 <= numbers.length() && numbers.substr(i, 3) == "one" ||
            i + 4 <= numbers.length() && numbers.substr(i, 4) == "zero" ||
            i + 5 <= numbers.length() && numbers.substr(i, 5) == "three" ||
            i + 4 <= numbers.length() && numbers.substr(i, 4) == "five" ||
            i + 3 <= numbers.length() && numbers.substr(i, 3) == "two" ||
            i + 5 <= numbers.length() && numbers.substr(i, 5) == "seven" ||
            i + 4 <= numbers.length() && numbers.substr(i, 4) == "eight" ||
            i + 3 <= numbers.length() && numbers.substr(i, 3) == "six" ||
            i + 4 <= numbers.length() && numbers.substr(i, 4) == "nine" ||
            i + 5 <= numbers.length() && numbers.substr(i, 5) == "four") {
            temp = numbers.substr(i, (i + 3 < numbers.length() ? 3 : i + 4 < numbers.length() ? 4 :
                                            i + 5 < numbers.length() ? 5 : i + 4 < numbers.length() ? 4 : 3));
            numVector.push_back(temp);
            i += temp.length();
        } else {
            temp = numbers.substr(i, (i + 1 < numbers.length() && isdigit(numbers[i])) ?
                                  (i + 2 < numbers.length() && isdigit(numbers[i+1]) && isdigit(numbers[i+2])) ? 3 :
                                            (i + 4 < numbers.length() && isdigit(numbers[i]) && isdigit(numbers[i+1]) &&
                                             isdigit(numbers[i+2]) && isdigit(numbers[i+3])) ? 4 : 5 : 1);
            numVector.push_back(temp);
            i += temp.length();
        }
    }

    sort(numVector.begin(), numVector.end());

    string result = "";
    for (int i = 0; i < numVector.size(); i++) {
        if (numberMap.find(numVector[i]) != numberMap.end()) {
            result += numVector[i] + " ";
        } else {
            result += numVector[i];
        }
    }

    return result;
}