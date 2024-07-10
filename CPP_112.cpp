int main {
    string s, c;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter a character to delete: ";
    cin >> c;
    vector<string> output = reverse_delete(s, c);
    for (string str : output) {
        cout << str << endl;
    }
}