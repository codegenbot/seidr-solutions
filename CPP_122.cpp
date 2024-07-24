#include <vector>
#include <cmath>

int add_elements(vector<int> arr, int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(arr[i])+1 <= 2) sum += arr[i];
    }
    return sum;
}

int main() {
    assert (add_elements({1}, 1) == 1);
    vector<int> vec = {1, 2, 3};
    int k = 3;
    cout << "Sum of elements less than or equal to 10 is: " << add_elements(vec, k) << endl;
    return 0;
}