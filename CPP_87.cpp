#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end());
    vector<vector<int>> finalResult;
    for (auto &item : result) {
        vector<int> temp = item;
        reverse(temp.begin() + 1, temp.end()); // Sort columns in descending order
        finalResult.push_back(temp);
    }
    return finalResult;
}