#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst) {
    if(lst.size() <= 1)
        return true;

    for(int i = 0; i < lst.size()-1; i++){
        if(lst[i] >= lst[i+1])
            return false;
    }

    std::vector<int>::iterator it;
    for(it = std::unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        if(*it > 0 && *(it-1) == *it)
            return false;
    }
    return true;

}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> lst(n);
    for(int i = 0; i < n; i++){
        std::cout << "Element " << i+1 << ": ";
        std::cin >> lst[i];
    }

    if(is_sorted(lst))
        std::cout << "The list is sorted.\n";
    else
        std::cout << "The list is not sorted.\n";

    return 0;
}