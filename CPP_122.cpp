#include <iostream>
#include <vector>
#include <cmath>

int add_elements(std::vector<int> arr,int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(arr[i])<3) sum+=arr[i];
    }
    return sum;

}

int main() {
    // Test the function
    assert(add_elements({1}, 1) == 1);
    return 0;
}