#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    a.erase(remove_if(a.begin(), a.end(), [](const string& s) { return s.length() % 2 != 0; }), a.end());
    sort(a.begin(), a.end(), [](const string& x, const string& y) {
        if (x.length() == y.length()) {
            return x < y;
        }
        return x.length() < y.length();
    });
    b.erase(remove_if(b.begin(), b.end(), [](const string& s) { return s.length() % 2 != 0; }), b.end());
    sort(b.begin(), b.end(), [](const string& x, const string& y) {
        if (x.length() == y.length()) {
            return x < y;
        }
        return x.length() < y.length();
    });
    return a == b;
}

int sorted_list_sum(vector<int> nums) {
    sort(nums.begin(), nums.end());
    return accumulate(nums.begin(), nums.end(), 0);
}

int main() {
    vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int sum = sorted_list_sum(numbers);
    assert(sum == 39);
    return 0;
}