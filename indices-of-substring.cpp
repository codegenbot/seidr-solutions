int main() {
    string text, target;
    cin >> target;
    cin >> text;
    vector<int> indices;

    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back((int)pos);
        pos += 1;
    }

    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    cout << endl;

    return 0;
}