#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        while (i + 1 <= numbers.length() && !ispunct(numbers[i + 1])) {
            i++;
        }
        temp = numbers.substr(i - numVec.size() + 1, i - i + 1);
        numVec.push_back(temp);
    }

    sort(numVec.begin(), numVec.end());

    string result;
    for (int i = 0; i < numVec.size(); i++) {
        if (i > 0) {
            result += " ";
        }
        result += numVec[i];
    }

    return result;
}