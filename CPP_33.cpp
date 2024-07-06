#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size())
        return false;
    return std::equal(a.begin(),a.end(),b.begin());
}

vector<int> sort_third(vector<int> l) {
    vector<int> result(l);
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 1 || i % 3 == 2) {
            std::nth_element(result.begin() + i, result.begin() + i, result.end());
        }
    }
    return result;
}

int main() {
    vector<int> a = {10,40,70,20,50};
    vector<int> b = {40,20,50,10,70};
    if(issame(a,b))
        cout<<"True";
    else
        cout<<"False";

    vector<int> l;
    for(int i=0;i<9;i++){
        if(i % 3 == 1 || i % 3 == 2)
            l.push_back(i+1);
    }
    
    l = sort_third(l);
    
    for(int i=0;i<l.size();i++){
        cout<<l[i]<<" ";
    }
    return 0;
}