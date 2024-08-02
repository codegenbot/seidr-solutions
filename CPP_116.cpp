#include <vector>
#include <algorithm>
#include <string>
#include <bitset>

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count(borrowed(a), '1') != count(borrowed(b), '1')) {
            return count(borrowed(a), '1') < count(borrowed(b), '1');
        }
        return a < b;
    });
    return arr;
}

std::string borrowed(int n) {
    std::string s = std::to_string(n);
    while (s.size() % 4 != 0) {
        s = "0" + s;
    }
    return s;
}