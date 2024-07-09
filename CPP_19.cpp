#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVector;
    string num = "";
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVector.push_back(num);
            num = "";
        } else {
            num += numbers[i];
        }
    }
    numVector.push_back(num);

    sort(numVector.begin(), numVector.end());
    string result = "";
    for (int i = 0; i < numVector.size(); i++) {
        result += numVector[i] + " ";
    }
    return result;
}