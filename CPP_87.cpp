#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++) {
        if(a[i].size() != b[i].size()) return false;
        for(int j = 0; j<a[i].size(); j++) {
            if(a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (x == 1) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(j);
                result.push_back(temp);
            }
        } else {
            for (int j = 0; j < lst[i].size(); j++) {
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(j);
                result.push_back(temp);
            }
        }
    }
    return result;
}

int main() {
    assert(issame(get_row({},{1},{1,2,3}),{{2,2}}));
    return 0;
}