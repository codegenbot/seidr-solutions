#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        temp += numbers[i];
        if ((i + 1) % 4 == 0 || i == numbers.length() - 1) {
            numVec.push_back(temp);
            temp = "";
        }
    }

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (const auto& str : numVec) {
        result += str + " ";
    }

    return result;
}