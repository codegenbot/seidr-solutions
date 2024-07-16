int main() {
    pair<string, string> result = reverse_delete("mamma", "mia");
    cout << "First part of the output: " << result.first << endl;
    cout << "Second part of the output: " << result.second << endl;
    assert(make_pair(result.first, "True") == make_pair("", "True")); 
    return 0;
}