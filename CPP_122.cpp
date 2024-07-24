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
    vector<int> inputArray;
    int n, k;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin >> k;
        inputArray.push_back(k);
    }
    cout << "Sum of the elements is: " << add_elements(inputArray, n) << endl;
    return 0;
}