```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(),
                      back_inserter(result));
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n1, n2;
    cout << "Enter the size of first array: ";
    cin >> n1;
    vector<int> v1(n1);
    cout << "Enter elements of first array: ";
    for (auto &i : v1) 
        cin >> i;

    cout << "Enter the size of second array: ";
    cin >> n2;
    vector<int> v2(n2);
    cout << "Enter elements of second array: ";
    for (auto &i : v2)
        cin >> i;
    
    vector<int> commonElements = common(v1, v2);
    if(commonElements.empty()) 
        cout << "No common elements found.\n";
    else {
        cout << "Common elements are: ";
        for (int i : commonElements) {
            cout << i << " ";
        }
    }
    return 0;
}