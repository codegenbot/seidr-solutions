#include <vector>

using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i].size() > 0 && lst[i][0] == x){
            for(int j = 0; j <= lst[i].size()-1; j++){
                result.push_back({i, j});
            }
        }
    }
    return result;
}