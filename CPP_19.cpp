#include <vector>
#include <algorithm>

string sort_numbers(string numbers) {
    vector<string> numVec;
    string numStr;

    for (char c : numbers) {
        switch (c) {
            case '0':
                numStr = "zero";
                break;
            case '1':
                numStr = "one";
                break;
            case '2':
                numStr = "two";
                break;
            case '3':
                numStr = "three";
                break;
            case '4':
                numStr = "four";
                break;
            case '5':
                numStr = "five";
                break;
            case '6':
                numStr = "six";
                break;
            case '7':
                numStr = "seven";
                break;
            case '8':
                numStr = "eight";
                break;
            case '9':
                numStr = "nine";
                break;
        }
        numVec.push_back(numStr);
    }

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (string s : numVec) {
        result += s + " ";
    }

    return result;
}