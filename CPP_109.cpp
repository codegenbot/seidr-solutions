#include <iostream>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;

    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            count++;
        }
    }
    if (arr[n - 1] > arr[0]) {
        count++;
    }

    return count <= 1;
}

int main() {
    std::vector<int> arr;
    int n, temp;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> temp;
        arr.push_back(temp);
    }
    bool result = move_one_ball(arr);
    std::cout << "Result: " << (result ? "true" : "false") << std::endl;
    return 0;
}