bool issame(vector<string> a,vector<string>b){
    for(int i = 0; i < a.size() && i < b.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return (a.size() == b.size());
}

int main() {
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}