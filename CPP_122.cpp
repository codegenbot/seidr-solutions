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
    cout << "Enter the number of elements: ";
    cin >> k;
    arr.resize(k);
    
    for(int i=0; i<k; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Sum of elements <= 100 is: " << add_elements(arr, k) << endl;
    return 0;
}