#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                   {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                   {"eight", 8}, {"nine", 9}};
    vector<string> numberVector;
    string num;

    for (char &c : numbers) {
        if (isdigit(c)) continue; // skip digits
        num = c == ' ' ? "" : c + "";
        while ((c = numbers[numbers.find(num) + 1]) != ' ') num += c;
        numberVector.push_back(num);
    }

    sort(numberVector.begin(), numberVector.end());
    return string(numberVector.size(), ' ') + join(numberVector, " ");
}

string join(vector<string> v, string sep) {
    string result = "";
    for (int i = 0; i < v.size(); i++) {
        result += v[i];
        if (i < v.size() - 1)
            result += sep;
    }
    return result;
}