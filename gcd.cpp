int main() {
    string text = "abracadabra";
    string target = "abra";
    vector<int> result = indicesOfSubstring(text, target);
    for (int index : result) {
        cout << index << " ";
    }
    return 0;
}