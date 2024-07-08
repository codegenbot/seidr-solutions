```cpp
int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            count++;
        } else if (c == 'B' || c == 'D' || c == 'F') {
            count++;
        }
    }
    return count;

}

int main() {
    assert(hex_key("") == 0);
    cout << "Enter a hexadecimal number: ";
    string num;
    cin >> num;
    if (num.size() > 0) {
        int result = hex_key(num);
        cout << "Number of valid characters in the given hexadecimal number is: " << result << endl;
    } else {
        cout << "Invalid input. Please enter a non-empty hexadecimal number." << endl;
    }
    
    return 0;
}