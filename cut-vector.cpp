int main() {
    vector<int> v = {1, 0};
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left vector: ";
    for (int i : result.first) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Right vector: ";
    for (int i : result.second) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}