```int main { 
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    map<char, int> hist = histogram(str);
    for (const auto& pair : hist) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}```