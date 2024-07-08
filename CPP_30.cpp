vector<float> get_positive(vector<float> v) {
    vector<float> result;
    for (float x : v) {
        if (x > 0) result.push_back(x);
    }
    return result;
}

bool operator==(const vector<float>& a, const vector<float>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(get_positive({}) == {});
    return 0;
}