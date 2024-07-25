int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    if (target.empty()) {
        for (int i = 0; i < text.size(); ++i) {
            indices.push_back(i);
        }
    } else {
        size_t pos = text.find(target, 0);
        while (pos != string::npos) {
            indices.push_back(pos);
            pos = text.find(target, pos + 1);
        }
    }

    for (const auto& index : indices) {
        cout << index << " ";
    }
    
    return 0;
}