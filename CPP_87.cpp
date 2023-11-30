#include <vector>

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for(int i = 0; i < lst.size(); i++){
        for(int j = 0; j < lst[i].size(); j++){
            if(lst[i][j] == x){
                vector<int> coordinate = {i, j};
                result.push_back(coordinate);
            }
        }
    }
    sort(result.begin(), result.end(), [](vector<int> a, vector<int> b){
        return a[0] < b[0];
    });
    for(int i = 0; i < result.size(); i++){
        sort(result[i].begin(), result[i].end(), greater<int>());
    }
    return result;
}

bool issame(vector<vector<int>> a, vector<vector<int>> b);

int main() {
    // Code here
    return 0;
}