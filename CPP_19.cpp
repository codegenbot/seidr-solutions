#include<string>
#include<map>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        } else if (i == 0 || numbers[i - 1] != ' ') {
            temp += numbers[i];
        } else if (!temp.empty()) {
            temp += numbers[i];
            numVector.push_back(temp);
            temp.clear();
        }
    }
    if (!temp.empty()) {
        temp += numbers.back();
        numVector.push_back(temp);
    }

    sort(numVector.begin(), numVector.end());
    string result = "";
    for (const auto &num : numVector) {
        result += num + " ";
    }
    return result;
}