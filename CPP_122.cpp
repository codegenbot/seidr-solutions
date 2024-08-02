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
    std::vector<int> vec = {1};
    int result = add_elements(vec, 1);
    // You can use the result here
    return 0;
}