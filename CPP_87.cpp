#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<vector<int>> a, vector<vector<int>> b);

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> coordinates;
    
    for(int i = 0; i < lst.size(); i++){
        for(int j = 0; j < lst[i].size(); j++){
            if(lst[i][j] == x){
                vector<int> coordinate = {i, j};
                coordinates.push_back(coordinate);
            }
        }
    }
    
    sort(coordinates.begin(), coordinates.end(), [](const vector<int>& a, const vector<int>& b){
        if(a[0] == b[0]){
            return a[1] > b[1];
        }
        return a[0] < b[0];
    });
    
    return coordinates;
}

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    return 0;
}