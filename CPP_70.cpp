#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }
    return result;
}

int main() {
    assert(issame(strange_sort_vector({111111}) , vector<int>({111111})));
    return 0;
}