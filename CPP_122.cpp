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
    vector<int> userInput;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        userInput.push_back(temp);
    }
    cout << "The sum of all numbers less than or equal to 100 is: " << add_elements(userInput, n) << endl;
    return 0;
}