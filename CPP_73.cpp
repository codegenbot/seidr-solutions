#include <vector>
#include <string>

int smallest_change(std::vector<int> arr) {
    std::string str = "";
    int n = arr.size(), left = 0, right = n - 1;
    for (int i : arr)
        str += to_string(i);
    while (left < right) {
        if (str[left] != str[right])
            return right - left + 1;
        else
            ++left, --right;
    }
    return 0;

int main() {
    return smallest_change({3,1});
}