```cpp
bool equalVectors(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}

bool filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : vec) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return equalVectors(result, {"xxx", "xxxAAA", "xxx"});
}

int main() {
    auto result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx");
    if (result) {
        std::cout << "Filtering successful." << std::endl;
    } else {
        std::cout << "Filtering failed." << std::endl;
    }
    return 0;
}