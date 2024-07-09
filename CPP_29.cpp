bool issame(string a, string b) {
    if(a.length() != b.length())
        return false;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    // Your code goes here...
    return 0;
}