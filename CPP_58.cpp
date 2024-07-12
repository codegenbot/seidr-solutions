#include <set>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool issame(vector<int> l1, vector<int> l2) {
    if (l1.size() != l2.size()) {
        return false;
    }
    for (int i = 0; i < l1.size(); i++) {
        if (find(l2.begin(), l2.end(), l1[i]) == l2.end()) {
            return false;
        }
    }
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result;
    copy(set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end()), s1.end(),
         back_inserter(result));

    return result;
}

int main(){
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {2, 4, 5};
    if (issame(v1, v2)) {
        cout << "The vectors are same." << endl;
    } else {
        cout << "The vectors are not same." << endl;
    }
    
    vector<int> common_elements = common(v1, v2);
    for (int i : common_elements) {
        cout << i << " ";
    }
    return 0;
}