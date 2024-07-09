```
#include <algorithm>
#include <vector>

using namespace std;

string sortNumbers(string numbers) {
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        temp += numbers[i];
        if ((i + 1) >= numbers.length() || numbers[i + 1] != ' ') {
            numVec.push_back(temp);
            temp = "";
        }
    }

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (auto &num : numVec) {
        result += num;
        if (&num != &numVec.back()) {
            result += " ";
        }
    }

    return result;
}