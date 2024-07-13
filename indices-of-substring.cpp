int main() {
    string text, target;
    cin >> target >> text;

    vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos++;
    }

    for (int index : indices) {
        cout << index << " ";
    }

    return 0;
}