using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a != b)
        return false;
    return true;
}

vector<int> sort_array(vector<int> arr) {
    auto comp = [&] (int a, int b) {
        if (bitset<32>(a).count() != bitset<32>(b).count()) {
            return bitset<32>(a).count() < bitset<32>(b).count();
        } else {
            return a < b;
        }
    };
    sort(arr.begin(), arr.end(), comp);
    return arr;
}