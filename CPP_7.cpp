#include <vector>
#include <algorithm>

bool same(vector<string> a, vector<string> b){
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const string& s) { return std::find(b.begin(), b.end(), s) != b.end(); });
}

int main(){
    assert(same({{"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}