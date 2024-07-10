#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> input;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        input.push_back(val);
    }
    
    vector<int> output = strange_sort_vector(input);
    
    for(int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    
    return 0;
}