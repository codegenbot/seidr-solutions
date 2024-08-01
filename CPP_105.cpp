bool issame(vector<string> a, vector<string> b) {
    if (a == b)
        return true;
    for (int i = 0; i < a.size() && i < b.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return a.size() == b.size();
}

int main() {
    // code here
}