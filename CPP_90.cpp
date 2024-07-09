#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> lst;
    int n;
    cout<<"Enter number of elements in the list: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter element "<<i+1<<": ";
        cin>>x;
        lst.push_back(x);
    }
    cout<<"Next smallest element is :"<<next_smallest(lst)<<endl;
    return 0;
}

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; 
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    for (int i = 0; i < sorted_lst.size() - 1; i++) {
        if (sorted_lst[i] != sorted_lst[i + 1]) {
            return sorted_lst[i + 1];
        }
    }
    return -1; 
}