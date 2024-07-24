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
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    for(int i=0; i<num; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> input.push_back();
    }
    cout << "Sum of elements with less than 100 is: " << add_elements(input, num) << endl;
    return 0;
}