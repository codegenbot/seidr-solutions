int main() {
    vector<int> arr = {16,17,4,3,5,2};
    vector<int> res = leaders(arr);
    for (int i:res) {
        cout << i << " ";
    }
    return 0;
}