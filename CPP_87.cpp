#include <vector>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b);

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b){
        if (a[0] != b[0]) {
            return a[0] < b[0];
        } else {
            return a[1] > b[1];
        }
    });
    return result;
}

int main() {
    // Sample usage
    vector<vector<int>> lst = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int x = 5;
    
    vector<vector<int>> result = get_row(lst, x);
    
    // Result comparison
    vector<vector<int>> expected = {{1, 1}};
    
    if (issame(result, expected)) {
        // Output correct
    } else {
        // Output incorrect
    }
    
    return 0;
}