```cpp
string string_xor(string a, string b) {
    string result;
    for(int i=0; i<a.length(); i++) {
        if(a[i] == '0' && b[i] == '0')
            result += '0';
        else if(a[i] == '1' && b[i] == '1')
            result += '0';
        else
            result += a[i];
    }
    return result;
}

int main() {
    string a, b;
    cout << "Enter the first string: ";
    cin >> a;
    cout << "Enter the second string: ";
    cin >> b;
    cout << "XOR of strings is: " << string_xor(a, b) << endl;
    return 0;
}