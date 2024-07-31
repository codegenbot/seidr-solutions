int main() {
    pair<vector<string>, bool> result = reverse_delete("mamma", "mia");
    assert(issame(result.first, {"", "True"}));  
    return 0;
}