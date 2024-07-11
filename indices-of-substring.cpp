int main() {
    string text, target;
    cin >> text >> target;

    vector<int> positions;
    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            positions.push_back(i);
        }
    }

    for (int pos : positions) {
        cout << pos << " ";
    }

    return 0;
}