#include <vector>
#include <set>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    vector<int> l1 = {1,2,3};
    vector<int> l2 = {3,4,5};
    vector<int> common = common(l1,l2);
    if(issame(l1,common)){
        cout << "The lists are same";
    }else{
        cout << "The lists are not same";
    }
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    vector<int> result(intersection.begin(), intersection.end());
    return result;
}