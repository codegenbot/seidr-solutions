#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst){
    int n = lst.size();
    if(n <= 1)
        return true;
    
    for(int i = 1; i < n; i++){
        if(lst[i] <= lst[i-1])
            return false;
    }
    
    return true;
}

int main(){
    std::vector<int> lst = {1, 2, 3, 4};

    // Call the is_sorted function
    bool sorted = is_sorted(lst);

    // Print the result
    std::cout << "The list is " << (sorted ? "sorted" : "not sorted") << std::endl;

    return 0;
}