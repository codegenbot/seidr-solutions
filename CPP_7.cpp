vector<string> filter_by_substring(vector<string> a, string substring){
    vector<string> result;
    for (const auto& str : a) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == vector<string>{"grunt", "prune"});

    return 0;
}