#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result;
    std::copy(std::set_difference(s1.begin(), s1.end(), s2.begin(), s2.end()),
          s1.end(),
          back_inserter(result));
    
    return vector<int>(result.begin(), result.end());
}

int main() {
    vector<int> l1 = {4, 3, 2, 8};
    vector<int> l2 = {2, 4, 6, 8};
    vector<int> commonElements = common(l1, l2);
    for(int i : commonElements) {
        cout << i << " ";
    }
    return 0;
}