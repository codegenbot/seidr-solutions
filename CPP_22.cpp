template <typename T, typename U>
bool issame(const list<T>& a, const list<U>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (!boost::iequal(a[i], b[i])) return false;
    }
    return true;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (issame({value}, list<int>()) && boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}