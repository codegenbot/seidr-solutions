#include <vector>
#include <cassert>

vector<int> make_a_pile(int n);
bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for(int i = 1; i < n; i++){
        if(n % 2 == 0)
            stones.push_back(n + i*2);
        else
            stones.push_back(n + i*2 - 1);
    }
    return stones;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}