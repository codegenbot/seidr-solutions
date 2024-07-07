int main() {
    string str, substring;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the substring: ";
    getline(cin, substring);
    int result = how_many_times(str, substring);
    cout << "The substring appears " << result << " times." << endl;
    return 0;
}