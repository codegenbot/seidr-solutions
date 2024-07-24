#include <vector>
#include <algorithm>

// Function to check if two vectors are same
bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

// Function to implement strange sort list
std::vector<int> strange_sort_list(std::vector<int> input) {
    std::sort(input.begin(), input.end());
    for(int i = 0; i < input.size(); i++) {
        for(int j = i + 1; j < input.size(); j++) {
            if(input[i] > input[j]) {
                std::swap(input[i], input[j]);
            }
        }
    }
    return input;
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> val;
        input.push_back(val);
    }
    std::vector<int> output = strange_sort_list(input);
    if(issame(output, {111111})) {
        std::cout << "Sorted list: ";
        for(int i : output) {
            std::cout << i << " ";
        }
    } else {
        std::cout << "Not sorted correctly";
    }
    return 0;
}