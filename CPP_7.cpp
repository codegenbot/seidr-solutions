```cpp
bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

vector<string> filter_by_substring(vector<string> words, string sub) {
    vector<string> result;
    for (auto word : words) {
        if (word.find(sub) != string::npos)
            result.push_back(word);
    }
    return result;
}

int main() {
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(result == vector<string>({"grunt", "prune"}));
    return 0;
}