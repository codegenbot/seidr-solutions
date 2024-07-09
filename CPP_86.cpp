```cpp
int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    if(str.empty()) {
        cout << "Error: Please enter a valid sentence." << endl;
    } else {
        cout << "Anti-shuffled sentence: " << anti_shuffle(str) << endl;
    }
    return 0;
}