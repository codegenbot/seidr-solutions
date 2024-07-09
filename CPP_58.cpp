```cpp
#include <iostream>
#include <vector>
#include <set>

bool issame(int a, int b) {
    return (a == b);
}

int common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      inserter(intersection, intersection.begin()));

    int count = 0;
    for(int num: intersection) {
        if(issame(count,0)) return num; // return the first common element
        count++;
    }
    return -1;
}

int main() {
    vector<int> l1 = {1,2,3};
    vector<int> l2 = {2,4,5};
    int result = common(l1, l2);
    if(result != -1)
        std::cout << "The first common element is: " << result << endl;
    else
        std::cout << "No common elements are found." << endl;

    return 0;
}