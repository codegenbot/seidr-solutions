#include <iostream>
#include <vector>
#include <set>

int issame(vector<int> v) {
    int count = 0;
    for (int i : v) {
        if (i % 2 == 0)
            count++;
    }
    return count;
}

int main() {
    vector<int> l1, l2;
    cout << "Enter the elements of list 1: ";
    while (cin >> l1.back()) {}
    
    cout << "Enter the elements of list 2: ";
    while (cin >> l2.back()) {}

    vector<int> result = common(l1, l2);
    int same = issame(result);

    return 0;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    return result;
}