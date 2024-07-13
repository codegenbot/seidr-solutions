```c++
#include <vector>
#include <set>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> common(vector<int> l1,vector<int> l2){
    vector<int> result;
    set<int> s1(l1.begin(),l1.end());
    set<int> s2(l2.begin(),l2.end());

    set<int> intersection(s1.begin(),s1.end());
    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),
        inserter(intersection,intersection.begin()));

    for(auto i: intersection){
        result.push_back(i);
    }

    sort(result.begin(),result.end());
    return result;
}

int main() {
    assert (issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}