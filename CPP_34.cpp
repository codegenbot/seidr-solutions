#include<vector>
#include<algorithm>

std::vector<int> unique(std::vector<int> l){
    std::vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    int i = 0;
    for(int j = 1; j < result.size(); j++){
        if(result[j] != result[i]){
            i++;
            result[i] = result[j];
        }
    }
    while(i > 0 && (i == result.size()-1 || result[i] == result[i+1])){
        i--;
    }
    return stdspace<int>(result.begin()+i+1, result.end());
}