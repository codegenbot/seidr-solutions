int main() {
    vector<int> l1 = {4, 3, 2, 8};
    vector<int> l2 = {4, 5, 6};

    vector<int> result = common(l1, l2);
    
    for (auto i : result) {
        cout << i << " ";
    }
    
    return 0;
}