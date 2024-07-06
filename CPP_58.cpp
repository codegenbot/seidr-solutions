#include <set>
#include <algorithm>

bool issame(int a) {
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(common, common.begin()));

    vector<int> result(common.begin(), common.end());
    return result;
}

int main() {
    int n1, n2;
    cout << "Enter the size of first list: ";
    cin >> n1;
    cout << "Enter the elements of first list: ";
    vector<int> l1(n1);
    for (int i = 0; i < n1; ++i)
        cin >> l1[i];
    
    cout << "Enter the size of second list: ";
    cin >> n2;
    cout << "Enter the elements of second list: ";
    vector<int> l2(n2);
    for (int i = 0; i < n2; ++i)
        cin >> l2[i];
    
    vector<int> common_list = common(l1, l2);
    cout << "Common elements in two lists are: ";
    for(int x : common_list) 
        cout << x << " ";  
    cout << endl;
    
    return 0;
}