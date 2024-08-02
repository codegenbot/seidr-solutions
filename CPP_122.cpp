#include <vector>
#include <cmath>

int add_elements(std::vector<int> arr,int k){
    int sum = 0;
    for(int i = 0; i < min(k, (int)arr.size()); i++){
        if(log10(abs(arr[i])) <= 2)
            sum += arr[i];
    }
    return sum;

}

int main() {
    std::vector<int> vec;
    int k;
    std::cout << "Enter the size of the array: ";
    std::cin >> k;
    vec.resize(k);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < k; i++) {
        std::cin >> vec[i];
    }
    
    int result = add_elements(vec,k);
    // You can use the result here
    return 0;
}