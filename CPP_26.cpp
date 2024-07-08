#include <initializer_list>
#include <vector>

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size())return false;
    for(int i=0; i<a.size();i++)if(a[i]!=b[i])return false;
    return true;

}

int main() {
    assert(issame(remove_duplicates({{1, 2}, {3, 4},{1, 2},{3, 4}}), {{1, 2}, {3, 4}}));
    return 0;
}