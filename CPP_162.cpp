int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        input = "";
    }

    string md5_hash = string_to_md5(input);
    
    cout << "MD5 Hash: " << md5_hash << endl;
    return 0;