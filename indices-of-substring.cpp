int main() {
    string text = "bananas";
    string target = "ana";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}