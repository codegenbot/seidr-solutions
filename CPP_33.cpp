vector<int> sort_third(vector<int> l){
    vector<int> result = l;
    vector<int> sortIndices;

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            sortIndices.push_back(i);
        }
    }

    sort(sortIndices.begin(), sortIndices.end(), [&l](int a, int b) {
        return l[a] < l[b];
    });

    for (int i = 0; i < sortIndices.size(); i++) {
        result[sortIndices[i]] = l[sortIndices[i]];
    }

    return result;
}