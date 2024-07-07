#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<int>> strange_sort_list(vector<int> lst) {
    vector<vector<int>> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        vector<int> temp;
        for(int i = 0; i < lst.size(); i++) {
            if(lst[i] != min_val) temp.push_back(lst[i]);
        }
        result.push_back(temp);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> vec(n);
    cout << "Enter the numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> result = strange_sort_list(vec);
    cout << "Sorted list:" << endl;
    for(auto& x : result) {
        for(auto& y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
    
    return 0;
}