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
    int numElements, k;
    
    cout << "Enter the number of elements: ";
    cin >> numElements;
    cout << "Enter the value of k: ";
    cin >> k;

    for(int i=0; i<numElements; i++){
        int element;
        cout << "Enter element "<<i+1<<": ";
        cin >> element;
        input.push_back(element);
    }
    
    cout << "Sum of elements that have a logarithm in base 10 less than or equal to 2 is: " << add_elements(input, k) << endl;

    return 0;
}