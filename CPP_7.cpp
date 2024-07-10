#include <vector>
#include <string>

bool same(vector<string> a,vector<string> b){
    return a == b;
}

int main() {
    assert (same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{{"grunt"}, {"prune"}}));
    return 0;
}