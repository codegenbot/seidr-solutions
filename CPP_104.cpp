#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        string strNum = to_string(num);
        for (char c : strNum) {
            if (stoi(string(1, c)) % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}