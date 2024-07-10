```cpp
#include <vector>
#include <algorithm>

// Function to compare two vectors for sameness
bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
        
    return true;
}

// Function to sort the vector according to task description
std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    
    return result;
}

int main() {
    std::vector<int> inputVector = {111111};
    std::vector<int> expectedOutput = {111111};
    
    // Assert the function is working as expected
    assert(issame(strange_sort_vector(inputVector), expectedOutput));
}