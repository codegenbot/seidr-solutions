bool issame(vector<string> a,vector<string> b) {
    return (a.size() == b.size()) && all_of(a.begin(), a.end(), [&](string s) { 
        auto it = find_if(b.begin(),b.end(),[&](string t) { return s==t; }); 
        return it != b.end(); }) ; 
} 

int main() {
    assert(issame(words_string("ahmed     , gamal") , {"ahmed", "gamal"}));
    return 0;
}