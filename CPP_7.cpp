```c++
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == {"grunt", "prune"});
    return 0; 
}