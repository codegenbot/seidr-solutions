int main() {
    string txt;
    cin >> txt;
    bool result = (txt.size() > 0) && isalpha(txt.back());
    cout << result << endl;
    return 0;
}