bool issame(string s1, string s2) {
    vector<string> result;
    for (const auto& str : s1) {
        if (str == s2) {
            result.push_back(str);
        }
    }
    return !result.empty();
}

int main() {
    // Your code here
}