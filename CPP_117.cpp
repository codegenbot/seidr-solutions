```cpp
int main() {
    string s = "Mary had a little lamb";
    int n = 4;
    vector<string> result = select_words(s, n);
    for (const auto& word : result) {
        cout << word << endl;
    }
    return 0;
}