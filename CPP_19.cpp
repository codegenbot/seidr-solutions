#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};

    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        } else if (numbers[i] == 'o' && numbers[i + 1] == 'n') {
            temp = "one";
        } else if (numbers[i] == 't' && numbers[i + 1] == 'h' && numbers[i + 2] == 'r') {
            temp = "three";
        } else if (numbers[i] == 't' && numbers[i + 1] == 'w') {
            temp = "two";
        } else if (numbers[i] == 'f' && numbers[i + 1] == 'o' && numbers[i + 2] == 'r') {
            temp = "four";
        } else if (numbers[i] == 'f' && numbers[i + 1] == 'i' && numbers[i + 2] == 'v') {
            temp = "five";
        } else if (numbers[i] == 's' && numbers[i + 1] == 'x') {
            temp = "six";
        } else if (numbers[i] == 's' && numbers[i + 1] == 'e' && numbers[i + 2] == 'v') {
            temp = "seven";
        } else if (numbers[i] == 'e' && numbers[i + 1] == 'i' && numbers[i + 2] == 'g') {
            temp = "eight";
        } else if (numbers[i] == 'n' && numbers[i + 1] == 'i' && numbers[i + 2] == 'n') {
            temp = "nine";
        } else if (numbers[i] == 'z' && numbers[i + 1] == 'e' && numbers[i + 2] == 'r') {
            temp = "zero";

        numVec.push_back(temp);

        i += strlen(temp) - 1;
    }

    sort(numVec.begin(), numVec.end());

    string result;

    for (int i = 0; i < numVec.size(); i++) {
        result += numVec[i] + " ";
    }

    return result;
}