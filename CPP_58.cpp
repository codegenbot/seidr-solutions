```cpp
#include <iostream>
#include <vector>
#include <set>

bool issame(vector<int> a, vector<int> b){
    return (a == b);
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
    int n1, m1, n2, m2;
    std::cout << "Enter number of elements in first array: ";
    std::cin >> n1;
    std::cout << "Enter elements of first array: ";
    vector<int> l1(n1);
    for (int i = 0; i < n1; ++i) {
        cin >> l1[i];
    }
    
    std::cout << "Enter number of elements in second array: ";
    std::cin >> m2;
    std::cout << "Enter elements of second array: ";
    vector<int> l2(m2);
    for (int i = 0; i < m2; ++i) {
        cin >> l2[i];
    }
    
    vector<int> result = common(l1, l2);
    cout << "Common elements are: ";
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}