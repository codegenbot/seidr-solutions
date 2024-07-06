template<typename T1, typename T2>
bool issame(const T1& t1, const T2& t2) {
    return std::type_index(typeid(T1)) == std::type_index(typeid(T2));
}

bool same(vector<int> a, vector<int> b) {
    // your comparison logic here
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (issame(int(), typeid(typeof(value)))) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}