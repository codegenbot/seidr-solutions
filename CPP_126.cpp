```
#include <iostream>
#include <vector>

int main() {
    bool is_sorted(vector<int> lst){
        for(int i = 1; i < lst.size(); i++){
            if(lst[i] <= lst[i-1]){
                return false;
            }
            int count = 0;
            for(int j = 0; j < lst.size(); j++){
                if(lst[j] == lst[i]){
                    count++;
                }
            }
            if(count > 1){
                return false;
            }
        }
        return true;
    }

    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> arr(n);

    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }

    if(is_sorted(arr)) {
        std::cout << "The array is sorted.\n";
    } else {
        std::cout << "The array is not sorted.\n";
    }
}