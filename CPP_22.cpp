```cpp
bool issame(const list_any& first, const list_any& second) {
    if (first.empty() && second.empty()) return true;
    if ((first.empty() || second.empty())) return false;

    return std::equal(first.begin(), first.end(),
                      second.begin(), second.end(),
                      [](const auto& a, const auto& b) {
                          return boost::any_cast<int>(a).type() == typeid(int)
                              && boost::any_cast<int>(b).type() == typeid(int);
                      });
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}