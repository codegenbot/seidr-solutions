bool issame(int x, int y) {
    return (x == y);
}

int main() {
    vector<int> v1 = {3, 2, 5};
    vector<int> v2 = sort_third(v1);

    for (auto i : v2)
        cout << i << " ";
    cout << endl;
}