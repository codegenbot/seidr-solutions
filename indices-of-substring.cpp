int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    int pos = -1;
    while ((pos = text.find(target, pos + 1)) != string::npos) {
        indices.push_back(pos);
    }

    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    cout << endl;

    return 0;
}