```cpp
bool issame(const std::vector<std::string>& a) { 
    if (a.size() == 0) return true;
    for (int i = 1; i <= a[0].length(); i++) {
        bool same = true;
        for (const auto& str : a) {
            if (str.substr(0, i) != a[0].substr(0, i)) {
                same = false;
                break;
            }
        }
        if (!same) return false;
    }
    return true;
}

int main() {
    assert(issame(all_prefixes("WWW")));
    std::vector<std::string> prefixes = all_prefixes("WWW");
    assert(std::equal(prefixes.begin(), prefixes.end(), {"W", "WW", "WWW"}));
    // ...
}