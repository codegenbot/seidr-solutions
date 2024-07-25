#include <vector>

bool issame(int a, int b) {
    if(a == b)
        return true;
    else
        return false;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if(x == 1) {
            for (int j = lst[i].size() - 1; j >= 0; j--) {
                vector<int> temp = {i, j};
                result.push_back(temp);
            }
        } else {
            for (int j = 0; j < lst[i].size(); j++) {
                vector<int> temp = {i, j};
                result.push_back(temp);
            }
        }
    }
    return result;
}