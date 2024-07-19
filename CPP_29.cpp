bool issame(vector<string> a, vector<string>b){
    for(auto s : b){
        if(find(a.begin(), a.end(), s) == a.end()){
            return false;
        }
    }
    return true;
}

int main() {
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
    return 0;
}