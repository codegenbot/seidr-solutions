```cpp
#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst) {
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> vec;

    for(int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> val;
        vec.push_back(val);
    }

    if(is_sorted(vec)) {
        std::cout << "The vector is sorted.\n";
    } else {
        bool swapped;
        do {
            swapped = false;
            for(int i = 0; i < vec.size() - 1; i++) {
                if(vec[i] > vec[i + 1]) {
                    int temp = vec[i];
                    vec[i] = vec[i + 1];
                    vec[i + 1] = temp;
                    swapped = true;
                }
            }
        } while(swapped);

        if(is_sorted(vec)) {
            std::cout << "The vector is now sorted.\n";
        } else {
            std::cout << "The vector is not sorted after sorting.\n";
        }
    }

    return 0;
}