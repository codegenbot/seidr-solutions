int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}