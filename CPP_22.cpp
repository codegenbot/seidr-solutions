using namespace std;

bool areSame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filterIntegers(const vector<any>& values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == type_id<int>()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main_contest() {
    assert(areSame(filterIntegers({3, 'c', 3, 3, 'a', 'b'}), vector<int>{3, 3, 3}));
    return 0;