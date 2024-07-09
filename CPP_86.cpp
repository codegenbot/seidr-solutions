int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string res = anti_shuffle(str);
    cout << "Anti-Shuffled String: " << res << endl;
    return 0;
}