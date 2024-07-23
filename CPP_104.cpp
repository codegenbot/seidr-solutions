#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    set<int> s;
    for (int num : x) {
        int newNum = 0;
        while (num > 0) {
            int digit = num % 10;
            newNum = newNum * 10 + digit;
            num /= 10;
        }
        s.insert(newNum);
    }
    vector<int> result(s.begin(), s.end());
    return result;
}