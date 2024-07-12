int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(static_cast<int>(i));
        }
    }

    for (int idx : indices) {
        cout << idx << " ";
    }

    cout << endl;

    return 0;
}