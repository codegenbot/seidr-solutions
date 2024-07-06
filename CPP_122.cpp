#include <vector>
#include <cmath>

int add_elements(std::vector<int> arr, int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(arr[i]) + 1 <= 2) {
            sum += arr[i];
        }
    }
    return sum;

}

int main() {
    std::vector<int> input = {1}; 
    int k = input.size(); 
    assert (add_elements(input, k) == 1); 
    return 0;
}