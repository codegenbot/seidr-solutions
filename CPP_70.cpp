#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i=0; i<n; i++){
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        lst.push_back(x);
    }
    
    vector<int> result = strange_sort_vector(lst);
    
    cout << "Sorted list: ";
    for(auto i : result){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}