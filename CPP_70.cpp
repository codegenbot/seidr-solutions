```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    
    return result;
}

int main() {
    vector<int> inputVector;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements:" << endl;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        inputVector.push_back(temp);
    }
    
    vector<int> outputVector = strange_sort_vector(inputVector);
    
    cout << "The sorted vector is: ";
    for(auto x : outputVector) {
        cout << x << " ";
    }
    return 0;
}