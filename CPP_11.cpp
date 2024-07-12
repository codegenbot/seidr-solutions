string string_xor(string a, string b) {
    string result;
    for (int i = 0; i < a.length(); i++) {
        char c = (a[i] - '0' ^ b[i] - '0') + '0';
        result += c;
    }
    return result;
}

int main() {
   string a, b;
   cout << "Enter the first binary number: ";
   cin >> a;
   cout << "Enter the second binary number: ";
   cin >> b;
   cout << "The XOR of the two numbers is: " << string_xor(a, b);
   return 0;
}