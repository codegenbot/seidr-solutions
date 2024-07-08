```cpp
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<vector<string>> a, vector<vector<string>> b) {
    if (a.size() != b.size()) {
        throw runtime_error("Vectors are not the same size");
    }

    for (int i = 0; i < a.size(); i++) {
        bool flag = true;
        for (auto str : a[i]) {
            if (!issame({str}, b[i])) {
                flag = false;
                break;
            }
        }
        if (!flag) {
            throw runtime_error("Vectors are not the same");
        }
    }

    return true;
}

int main() {
    try {
        auto res = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
        assert(issame({{filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").begin(), (filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")).end()}}, {{{"grunt"}}, {{"prune"}}}));
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        return 1; // Return with a non-zero value
    }
}