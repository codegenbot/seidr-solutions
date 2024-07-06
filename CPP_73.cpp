#include <vector>
#include <string>

int smallest_change(std::vector<int> arr) {
    std::string str = "";
    int n = arr.size(), left = 0, right = arr.size() - 1, changes = 0;
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
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    int result = smallest_change(arr);
    std::cout << "The smallest change is: " << result << std::endl;
}