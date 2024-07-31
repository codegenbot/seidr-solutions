#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void display(vector<int> l) {
    for(int i: l) cout << i << " ";
}

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    return vector<int>(s.begin(), s.end()); 
}