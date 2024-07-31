#include <algorithm>
#include <vector>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count(borrowed(a), '1') != count(borrowed(b), '1')) {
            return count(borrowed(a), '1') < count(borrowed(b), '1');
        }
        return a < b;
    });
    return arr;
}

string borrowed(int n) {
    string str = to_string(n);
    for (int i = 0; i < str.length(); ++i) {
        str[i] = '0' + str[i];
    }
    return str;
}