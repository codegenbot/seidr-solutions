using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(isSame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}