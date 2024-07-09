#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a,vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        lst.push_back(x);
    }
    vector<int> result = strange_sort_list(lst);
    cout << "The sorted list is: ";
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}