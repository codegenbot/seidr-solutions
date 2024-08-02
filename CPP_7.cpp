#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    return a==b;
}

int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    assert (issame(result ,{{"grunt","prune"}}));
    return 0;
}