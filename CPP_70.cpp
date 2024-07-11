#include <vector>
#include <algorithm> // Add for using sort function

bool issame(std::vector<int> a, std::vector<int> b) { // Define issame with correct signature
    // Implement the function logic
}

std::vector<int> strange_sort_list(std::vector<int> lst); // Function prototype

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::sort(lst.begin(), lst.end()); // Use std::sort
    std::vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left]);
        if (left != right) {
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}

int main() {
    // Call the strange_sort_list function in main
    assert(issame(strange_sort_list({111111}), {111111}));
}