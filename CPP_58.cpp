#include <vector>
#include <assert>
#include <iostream>

using namespace std;

bool isSame(vector<int> a,vector<int> b){
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));
    vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> l1;
    int n;
    cout << "Enter number of elements in list 1: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element: ";
        cin >> x;
        l1.push_back(x);
    }
    
    vector<int> l2;
    cout << "Enter number of elements in list 2: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element: ";
        cin >> x;
        l2.push_back(x);
    }
    
    vector<int> commonElements = common(l1, l2);
    cout << "Common elements are: ";
    for(int i : commonElements) {
        cout << i << " ";
    }
    return 0;
}