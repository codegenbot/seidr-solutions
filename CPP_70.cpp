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
    vector<int> input;
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    for (int i = 0; i < num; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        input.push_back(num);
    }
    
    vector<int> output = strange_sort_vector(input);
    
    cout << "Sorted list: ";
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    
    return 0;
}