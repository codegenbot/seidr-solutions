bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main(){
    vector<int> common = common({4, 3, 2, 8}, {});
    assert(issame(common,{},{});
    return 0;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      inserter(common, common.begin()));

    vector<int> result(common.begin(), common.end());
    sort(result.begin(), result.end());
    return result;
}