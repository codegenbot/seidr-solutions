bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

// rest of your existing code

int main() {
    // your existing code
    
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    
    return 0;
}