int main() {
    string text, target;
    cin >> target >> text;

    vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for (int index : indices) {
        cout << index << " ";
    }
    
    return 0;
}