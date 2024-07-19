int main
{
    vector<string> lst;
    string str;
    cout << "Enter strings (enter 'stop' to finish): ";
    while (true) {
        cin >> str;
        if (str == "stop") break;
        lst.push_back(str);
    }
    vector<vector<string>> expected = sorted_list_sum(lst);
    assert(issame(expected, expected));
    return 0;
}