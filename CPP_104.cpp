#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        int newNum = 0;
        while (num > 0) {
            int digit = num % 10;
            newNum = newNum * 10 + digit;
            num /= 10;
        }
        if (find(result.begin(), result.end(), newNum) == result.end())
            result.push_back(newNum);
    }
    sort(result.begin(), result.end());
    return result;
}