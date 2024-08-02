vector<string> input = {"apple", "orange", "banana", "grape", "kiwi"};
    vector<string> result = sorted_list_sum(input);
    for (const string& item : result) {
        cout << item << " ";
    }

    assert(areEqual(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));