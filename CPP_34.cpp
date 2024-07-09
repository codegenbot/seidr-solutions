#include <algorithm>
#include <vector>
#include <iostream>

bool issame(vector<int> a, vector<int>b){
    return (a == b);
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    
    auto unique_end = unique(input.begin(), input.end());
    vector<int> output(input.begin(), unique_end);
    sort(output.begin(), output.end());
    
    for (int i : output) {
        cout << i << " ";
    }
}