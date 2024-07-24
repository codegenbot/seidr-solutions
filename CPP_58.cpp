#include<vector>
#include<algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result;
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
                    back_inserter(result));

    return result;
}