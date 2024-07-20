#include <vector>
#include <algorithm>

int search(vector<int> lst) {
    int max = -1;
    for (auto num : lst) {
        if (num > 0 && num <= std::count(lst.begin(), lst.end(), num)) { 
            max = num;
        }
    }
    return max;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);  
    // Your code here
    return 0;
}