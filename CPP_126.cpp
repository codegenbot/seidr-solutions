#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            if(std::count(lst.begin(), lst.end(), lst[i]) > 1)
                return false;
        }
        else
            return false;
    }
    return true;
}

int main() {
    // Task description: Write a program that checks whether an array is sorted or not.
    // The array contains only integers. If the array is sorted, it returns true; otherwise, it returns false.

    // Example usage:
    assert (is_sorted({1, 2, 3, 4}) == true);
    return 0;
}