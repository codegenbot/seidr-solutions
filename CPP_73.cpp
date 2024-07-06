```c++
#include <vector>
#include <string>
#include <initializer_list>

int smallest_change(std::initializer_list<int> il) {
    std::string str = "";
    int n = 0, left = 0, right = 0, changes = 0;
    for (int i : il)
        str += to_string(i);
    while (left < right) {
        if (str[left] != str[right])
            ++changes;
        else
            ++left, --right;
    }
    return changes;

int main() {
    std::cout << smallest_change({1, 2, 3}) << std::endl;  
    return 0;
}