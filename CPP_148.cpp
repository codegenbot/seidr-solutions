bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++) {
        for(int j=0;j<a.size();j++) {
            if(a[i] == b[j])return true;
        }
    } 
    return false;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));  // Use the bf function you provided
}