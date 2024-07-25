#include <vector>
#include <algorithm>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x){
    std::vector<std::vector<int>> result;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i].size() > 0 && lst[i][0] == x){
            for(int j = 0; j < lst[i].size(); j++){
                result.push_back({i, lst[i].size()-j-1});
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}