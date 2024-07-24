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

    // Read the number of elements
    cout << "Enter the number of elements: ";
    cin >> numElements;

    // Read each element
    for(int i=0; i<numElements; i++){
        cout << "Enter element " << (i+1) << ": ";
        cin >> input.push_back();
    }

    cout << "Enter k: ";
    cin >> k;
    
    int output = add_elements(input, k);
    
    // Display the result
    cout << "Sum of elements: " << output << endl;

    return 0;
}