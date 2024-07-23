```cpp
int main() {
    vector<string> str = {"hello", "world", "hello", "abc", "world"};
    string sub = "world";
    bool same = issame(str, {sub, sub});
    vector<string> filtered = filter_by_substring(str, sub);
    
    if (same) {
        cout << "Vectors are the same." << endl;
    } else {
        cout << "Vectors are not the same." << endl;
    }
    
    cout << "Filtered strings: ";
    for(auto x : filtered) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}