#include <vector>
using namespace std;

int next_smallest(vector<int> lst) {
    vector<int> v = lst;
    if(v.size() < 2) return -1; // Return None (or -1 in this case)
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++) {
        if(v[i] != v[i+1]) {
            if(i == v.size() - 2) return v[i+1];
            else return v[i];
        }
    }
    return -1; // Return None (or -1 in this case)
}