#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst){
    if (lst.size() <= 1) return true;

    for(int i = 1; i < lst.size(); i++){
        if(lst[i] >= lst[i-1]){
            continue;
        }else{
            int count = 0;
            for(int j = 0; j < lst.size(); j++){
                if(lst[j] == lst[i]) count++;
            }
            return count > 1;
        }
    }

    return true;
}

int main(){
    std::vector<int> lst;
    int n;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << (i+1) << ": ";
        int num;
        std::cin >> num;
        lst.push_back(num);
    }

    if(is_sorted(lst)){
        std::cout << "The list is sorted." << std::endl;
    }else{
        std::cout << "The list is not sorted." << std::endl;
    }
    
    return 0;
}