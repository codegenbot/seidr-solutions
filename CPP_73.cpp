#include <vector>
#include <string>
#include <initializer_list>

int smallest_change(std::vector<int> arr) {
    std::string str = "";
    int n = arr.size(), left = 0, right = n - 1, changes = 0;
    for (int i : arr)
        str += to_string(i);
    while (left < right) {
        if (str[left] != str[right])
            ++changes;
        else
            ++left, --right;
    }
    return changes;

int main() {
    std::cout << "This is your output" << std::endl;  
    return 0;
}