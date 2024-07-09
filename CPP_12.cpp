int main() {
    vector<string> strings = {"hello", "world", "this", "is", "a", "test"};  
    if(strings.empty()) {
        return 0;
    } else {
        string longest = *max_element(strings.begin(), strings.end(),
            [](const string& a, const string& b) {return a.size() < b.size();});
        return longest.size();
    }
}