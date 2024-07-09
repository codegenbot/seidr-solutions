```
#include <iostream>
#include <vector>

bool can_arrange(std::vector<int> arr){
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] <= arr[i-1])
            return false;
    }
    return true;
}

int main(){
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }

    if(can_arrange(arr))
        std::cout << "The elements can be arranged in increasing order." << std::endl;
    else
        std::cout << "The elements cannot be arranged in increasing order." << std::endl;

    return 0;
}