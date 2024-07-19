bool is_happy(const std::string s) {
    if (s.length() < 3) {
        return false;
    }
    
    for (int i = 0; i < static_cast<int>(s.length()) - 2; ++i) {
        if (s[i] == s[i] || s[i] == s[i] || s[i] == s[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(is_happy("iopaxioi") == false);
    // Add more test cases here
    return 0;
}