#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> input;
    int num;
    std::cout << "Enter numbers (enter -1 to stop): ";
    while(true){
        std::cin >> num;
        if(num == -1) break;
        input.push_back(num);
    }
    if(is_sorted(input))
        std::cout << "The list is sorted.\n";
    else
        std::cout << "The list is not sorted.\n";
    return 0;
}