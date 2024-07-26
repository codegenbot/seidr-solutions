#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sorted_list_sum(vector<int> lst1, vector<int> lst2) {
    vector<int> result = lst1;
    result.insert(result.end(), lst2.begin(), lst2.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> v1 = {1, 3, 5};
    vector<int> v2 = {2, 4, 6};
    
    vector<int> sum = sorted_list_sum(v1, v2);
    
    if (issame(v1, v2)) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }
    
    for (int num : sum) {
        cout << num << " ";
    }
    
    return 0;
}