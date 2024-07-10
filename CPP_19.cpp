#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp;
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVec.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    numVec.push_back(temp);

    sort(numVec.begin(), numVec.end());

    string result;
    for (int i = 0; i < numVec.size(); i++) {
        if (i == 0) {
            result = numVec[0];
        } else {
            result += " ";
            result += numVec[i];
        }
    }

    return result;
}