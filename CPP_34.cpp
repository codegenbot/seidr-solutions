#include <bits/stdc++.h>
using namespace std;

vector<int> fixDuplicates(vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}