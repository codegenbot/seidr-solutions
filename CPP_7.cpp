bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    bool result = issame(std::vector<string>(), std::vector<string>());
    return 0;
}