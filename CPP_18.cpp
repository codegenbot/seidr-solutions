```cpp
int how_many_times(const string& str, const string& substring) {
    int count = 0;
    size_t pos = 0;
    for (size_t i = 0; i < str.length(); i++) {
        if (str.find(substring, i) != string::npos) {
            count++;
            i += substring.length() - 1; // To avoid skipping characters
        }
    }
    return count;

}

int main() {
    string str, substring;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter a substring: ";
    cin >> substring;
    
    int result = how_many_times(str, substring);
    cout << "The substring appears " << result << " times.\n";
}