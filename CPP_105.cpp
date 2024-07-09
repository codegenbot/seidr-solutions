#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

int main() {
    int size;
    std::cout << "Enter the number of elements in array: ";
    std::cin >> size;

    std::vector<int> arr(size);
    for (auto& num : arr) {
        std::cout << "Enter element " << (size > 1 ? ++num : "1") << ": ";
        std::cin >> num;
    }

    vector<string> result = by_length(arr);

    int choice;
    std::cout << "Press 1 to reverse the array, any other key to compare with itself: ";
    std::cin >> choice;

    if (choice == 1) {
        std::reverse(result.begin(), result.end());
    }

    vector<string> test_result = by_length(arr);
    std::cout << "Final output: ";
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << "\nIs same with original? " << (issame(result, test_result) ? "Yes" : "No") << std::endl;

    return 0;
}