#include <vector> // Include the necessary header file for vector

bool issame(std::vector<int> a, std::vector<int> b){ // Correct function signature for issame function

    // Your existing code here
}

std::vector<int> strange_sort_list(std::vector<int> lst); // Function declaration

int main(){
    // Your existing code here
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    sort(lst.begin(), lst.end());
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