#include <iostream>
#include <algorithm>

bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) return false;
    }
    vector<int> temp(lst.begin(), lst.end());
    sort(temp.begin(), temp.end());
    for (int i = 0; i < lst.size(); i++) {
        if (temp[i] != lst[i]) return false;
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    vector<int> input;
    int num;
    
    while(std::cin >> num) {
        input.push_back(num);
    }
    
    if (is_sorted(input)) {
        std::cout << "The list is sorted." << std::endl;
    } else {
        std::cout << "The list is not sorted." << std::endl;
    }
    
    return 0;
}