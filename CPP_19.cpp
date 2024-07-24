#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string word;
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVec.push_back(word);
            word = "";
        } else {
            word += numbers[i];
        }
    }
    numVec.push_back(word);

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (int i = 0; i < numVec.size(); i++) {
        result += numVec[i] + " ";
    }

    return result;
}