```cpp
#include <vector>
using namespace std;

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    return a == b;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    
    if(x >= 0 && x < lst.size()) {
        for(int j = 0; j < lst[x].size(); j++) {
            reverse(lst[x].begin() + j, lst[x].end());
        }
        
        for(int i = 0; i <= x; i++) {
            vector<int> row;
            if(i == x) {
                row = lst[i];
            } else {
                row = {i};
            }
            result.push_back(row);
        }
    }
    
    return result;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{}, {1}, {2, 3}}));
    return 0;
}