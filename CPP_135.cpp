#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i] <= arr[i-1])
            return i;
    }
    return -1;
}

int main(){
    int n, k;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> arr(n);
    for(int i=0; i<n; i++){
        std::cout << "Element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    k = can_arrange(arr);
    
    if(k == -1)
        std::cout << "The array can be arranged.\n";
    else
        std::cout << "The first element that cannot be arranged is at index " << k << ".\n";
    
    return 0;
}