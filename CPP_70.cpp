```cpp
#include <bits/stdc++.h>
using namespace std;

bool issame(vector<int> a,vector<int> b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i]!=b[i])
            return false;
    return true;
}

int main() {
    vector<int> lst;
    int n;
    cout<<"Enter the number of elements in list: ";
    cin>>n;
    cout<<"Enter the elements in list: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        lst.push_back(x);
    }
    vector<int> result = strange_sort_list(lst);
    if(result.size()==0)
        cout<<"The list is empty."<<endl;
    else{
        cout<<"Sorted list: ";
        for(int i=0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;
        cout<<"Is the sorted list same as the original? "<<issame(lst,result)<<endl;
    }
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