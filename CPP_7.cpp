bool issame(vector<string> a, vector<string> b) {
    vector<string> result;
    for (const auto& str : a) {
        if (str.find(b[0]) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(issame({"grunt", "trumpet", "prune", "gruesome"}, {"run"}) == vector<string>{"grunt", "prune"});

    return 0;
}