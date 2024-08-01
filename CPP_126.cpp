#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int>::iterator it = std::unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> v;
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        v.push_back(num);
    }

    if(is_sorted(v)){
        std::cout << "The vector is sorted." << std::endl;
    }
    else{
        std::cout << "The vector is not sorted." << std::endl;
    }

    return 0;
}