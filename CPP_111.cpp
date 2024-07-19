int main() {
    string test;
    cout << "Enter a string: ";
    cin >> test;

    map<char, int> histogram = histogram(test);

    for (auto p : histogram) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}