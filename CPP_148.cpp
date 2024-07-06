#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> bf(std::string a, std::string b) {
    int n = a.size();
    for(int i=0; i<n/2; ++i){
        if(a[i] != b[n-i-1])
            return {"BOF", "NO"};
    }
    return {"BOF", "YES"};
}