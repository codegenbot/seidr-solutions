int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << flip_case(str) << endl;
    return 0;
}