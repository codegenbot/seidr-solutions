vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a%2 == 0 ? a : a+1; i <= b; i += 2) {
        result.push_back(i);
    }
    return result;
}