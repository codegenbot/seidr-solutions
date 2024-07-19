```cpp
vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool operator==(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(filter_integers({3, 'c', 3, 3, 'a', 'b'}) == vector<int>({3, 3, 3}));
    return 0;
}