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

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    for (int x : l1)
        if (find(all(l2,x)) != l2.end())
            result.push_back(x);
    return result;
}

int main() {
    vector<int> l1 = {4, 3, 2, 8};
    vector<int> l2 = {4, 5, 6};

    vector<int> result = common(l1, l2);
    
    for (auto i : result) {
        cout << i << " ";
    }
    
    return 0;
}