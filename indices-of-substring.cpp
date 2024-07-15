```cpp
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> res;
    int n = text.length();
    int m = target.length();

    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m) == target){
            res.push_back(i);
        }
    }

    return res;
}