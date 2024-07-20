#include <vector>
#include <cmath>

int add_elements(std::vector<int> arr, int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(arr[i]+1) <= 2) sum += arr[i];
    }
    return sum;
}

int main(){
    std::vector<int> arr;
    int k;
    cout << "Enter the size of array: ";
    cin >> k;
    arr.resize(k);
    cout << "Enter elements: ";
    for(int i=0; i<k; i++){
        cin >> arr[i];
    }
    cout << "Sum of elements is: " << add_elements(arr, k) << endl;
    return 0;
}