#include <vector>
#include <cmath>

int main() {
    int k;
    cout << "Enter number of elements: ";
    cin >> k;

    vector<int> arr(k);
    for(int i=0; i<k; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Sum of elements that have a logarithm to the base 10 of less than or equal to 2: " << add_elements(arr, k) << endl;

    return 0;
}

int add_elements(vector<int> arr,int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(arr[i]+1) <= 2) sum += arr[i];
    }
    return sum;
}