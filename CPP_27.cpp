int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "The flipped case is: " << flip_case(str) << endl;
    return 0;
}