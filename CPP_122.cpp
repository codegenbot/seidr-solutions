```cpp
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
    vector<int> input;
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> k;
        input.push_back(k);
    }
    cout << "Sum of elements less than or equal to 100 is: " << add_elements(input, n) << endl;
    return 0;
}