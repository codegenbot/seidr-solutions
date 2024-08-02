```cpp
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count(bitset<32>(a).begin(), bitset<32>(a).end(), 1) <
            count(bitset<32>(b).begin(), bitset<32>(b).end(), 1))
            return true;
        else if (count(bitset<32>(a).begin(), bitset<32>(a).end(), 1) ==
                 count(bitset<32>(b).begin(), bitset<32>(b).end(), 1))
            return a < b;
        return false;
    });
    return arr;
}