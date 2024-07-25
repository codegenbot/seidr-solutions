#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++)
        if (v1[i] != v2[i])
            return false;
    return true;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].size() > 0 && lst[i][0] == x) {
            vector<int> row(lst[i]);
            bool found = false;
            for (vector<vector<int>>::iterator it = result.begin();
                 it != result.end(); ++it) {
                if (isSame(row, *it))
                    found = true;
                break;
            }
            if (!found)
                result.push_back(row);
        }
    }
    return result;
}