int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<pair<int, int>> output = result(arr);
    for (auto p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}