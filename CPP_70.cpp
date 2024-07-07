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

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        for(int i = 0; i < lst.size(); i++) {
            if(lst[i] != min_val) result.push_back(lst[i]);
        }
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
    
    vector<int> result = strange_sort_list(vec);
    cout << "Sorted list:" << endl;
    for(auto& x : result) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}