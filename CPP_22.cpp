bool operator==(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, any('c'), 3, 3, any('a'), any('b')}) == {3, 3, 3});
    return 0;
}