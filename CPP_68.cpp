#include <iostream>
#include <vector>
using namespace std;

bool issame(int a, int b) {
    return a == b;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if(arr.empty()) return result;

    int smallest_even = INT_MAX;
    int index_smallest_even = -1;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%2==0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_smallest_even = i;
        }
    }

    result.push_back(smallest_even);
    result.push_back(index_smallest_even);

    return result;
}

int main() {
    vector<int> input;
    int num;
    cout << "Enter numbers (enter -1 to stop): ";
    
    while(true) {
        cin >> num;
        if(num == -1) break;
        input.push_back(num);
    }
    
    vector<int> output = pluck(input);
    if(output.size() > 0) {
        cout << "Smallest even number: " << output[0] << endl;
        cout << "Index of smallest even number: " << output[1] << endl;
    } else {
        cout << "No even numbers found." << endl;
    }
    
    return 0;
}