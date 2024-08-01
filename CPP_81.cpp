bool issame(vector<string> a, vector<string>b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

int main() {
    assert(issame(vector<string>(numerical_letter_grade({0, 0.7}), {"E", "D-"})));
    return 0;
}