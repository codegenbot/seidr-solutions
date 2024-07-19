#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}