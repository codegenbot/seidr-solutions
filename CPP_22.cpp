int mainTest() {
    vector<variant<int>> values = {{1}, {2}, {3}};
    initializer_list<variant<int>> il(values.begin(), values.end());
    assertEqual(filter_integers(il), vector<int>({1, 2, 3}));
    return 0;
}