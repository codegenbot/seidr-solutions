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
    int k;
    cout << "Enter the number of elements: ";
    cin >> k;
    for(int i=0; i<k; i++){
        cout << "Enter element "<<i+1<<": ";
        int num;
        cin >> num;
        input.push_back(num);
    }
    cout << "Sum of elements with 2 or less digits: " << add_elements(input, k) << endl;
    return 0;
}