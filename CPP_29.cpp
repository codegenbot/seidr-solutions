bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") == vector<string>{"xxx", "xxxAAA", "xxx"});
    
    return 0;
}