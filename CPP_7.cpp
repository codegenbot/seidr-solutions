bool issame(vector<string> a, vector<string> b, string key) {
    vector<string> a_filtered = filter_by_substring(a, key);
    vector<string> b_filtered = filter_by_substring(b, key);
    
    return a_filtered == b_filtered;
}

int main() {
    #include <cassert>
    
    vector<string> strings1 = {"apple", "banana", "cherry", "date"};
    vector<string> strings2 = {"banana", "date", "grape", "melon"};
    
    assert(issame(strings1, strings2, "a"));
    assert(!issame(strings1, strings2, "x"));
    
    return 0;
}