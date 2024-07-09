int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(arr);
    for (auto x : result) {
        cout << x << " ";
    }
    return 0;
}