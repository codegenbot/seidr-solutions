#include <string>

string encrypt(string s) {
    string encryptedString = "";

    for (int i = 0; i < s.length(); i++) {
        int asciiValue = int(s[i]);
        int encryptedValue = asciiValue + (2 * 2);
        
        if (encryptedValue > 122) {
            encryptedValue = (encryptedValue % 122) + 96;
        }
        
        encryptedString += char(encryptedValue);
    }

    return encryptedString;
}