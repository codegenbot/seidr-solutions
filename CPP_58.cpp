#include <vector>
#include <assert>
#include <iostream>

using namespace std;

bool issimilar(vector<int> a,vector<int> b){
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
    int n;
    vector<int> l1,l2;
    cout << "Enter number of elements for first list: ";
    cin >> n;
    cout << "Enter " << n << " elements for first list: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        l1.push_back(x);
    }
    
    cout << "Enter number of elements for second list: ";
    cin >> n;
    cout << "Enter " << n << " elements for second list: ";
    for(int i = 0; i < n; i++){
        int x;
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