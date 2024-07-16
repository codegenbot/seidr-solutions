int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    if (target.empty()) {
        for (int i = 0; i < text.size(); ++i) {
            indices.push_back(i);
        }
    } else {
        size_t pos = 0;
        while ((pos = text.find(target, pos)) != string::npos) {
            indices.push_back(pos);
            pos += 1;
        }
    }

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}