auto findIndices(string text, string target) -> vector<int> {
    vector<int> indices;
    int prevLast = 0;
    while ((int last = text.find(target, prevLast)) != string::npos) {
        indices.push_back(stoi(to_string(last + 1)));
        prevLast = last + 1;
    }
    return indices;
}