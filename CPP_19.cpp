#include <vector>
#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string num;
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVec.push_back(num);
            num = "";
        } else {
            num += numbers[i];
        }
    }
    numVec.push_back(num);

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (const auto &num : numVec) {
        result += num + " ";
    }

    return result;
}