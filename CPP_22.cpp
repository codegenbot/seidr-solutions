```cpp
bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filterIntegers(list<int> values) {
    vector<int> result;
    for (const auto& value : values) {
        if(value >= 0 && value <= 255) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    assert(isSame(filterIntegers({3, 3, 3}), {3, 3, 3}));
    return 0;
}