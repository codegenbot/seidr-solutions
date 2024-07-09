#include <algorithm>
#include <vector>

bool issame(vector<string> a,vector<string>b){
    return (a.size() == b.size()) && (std::count(a.begin(), a.end(), 'a') == std::count(b.begin(), b.end(), 'a'));
}

int main() {
    vector<string> result = {"aaaa", "bbbb"};
    for(int i=1; i<=3;++i) {
        result.push_back(string(i,'a').append(string(i,'b'));
    }
    return 0;
}