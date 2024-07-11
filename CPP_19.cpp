#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string numStr;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVec.push_back(numStr);
            numStr = "";
        } else {
            numStr += numbers[i];
        }
    }
    numVec.push_back(numStr);

    sort(numVec.begin(), numVec.end());

    string result;
    for (int i = 0; i < numVec.size(); i++) {
        if (i == 0)
            result = numVec[i];
        else
            result += " " + numVec[i];
    }

    return result;
}