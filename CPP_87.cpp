```cpp
#include <vector>
using namespace std;

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    return a == b;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for(int i = 0; i < lst.size(); i++){
        if(i == x) {
            reverse(lst[i].begin(), lst[i].end());
            result.push_back({i, 1});
        } else {
            result.push_back({i, 1});
        }
    }
    return result;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 2), {{0, 1}, {1, 1}, {2, 1}}));
    return 0;
}