Here is the completed code:

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    s1.insert(s1.begin(), s1.end());
    s2.insert(s2.begin(), s2.end());

    s1.erase(remove_if(s1.begin(), s1.end(),
                        bind1st(ptr_fun<int, int>(not_equal_to()), &s2)), s1.end());
    s2.erase(remove_if(s2.begin(), s2.end(),
                        bind1st(ptr_fun<int, int>(not_equal_to()), &s1)), s2.end());

    vector<int> res;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(),
              inserter(res, res.begin()));
    return res;
}

int main() {
    vector<int> l1 = {1, 4, 3, 34, 653, 2, 5};
    vector<int> l2 = {5, 7, 1, 5, 9, 653, 121};

    for(int i : common(l1,l2))
        cout << i << " ";
    return 0;
}