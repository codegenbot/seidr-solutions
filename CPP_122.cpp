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
    std::cout << "Enter the size of the vector: ";
    std::cin >> k;
    for(int i = 0; i < k; i++){
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        vec.push_back(temp);
    }
    int result = add_elements(vec, k);
    std::cout << "Sum of elements: " << result << std::endl;
    return 0;
}