#include <string>

string encode_cyclic(string s) {
    string output;
    int l = s.length();
    int num = (l + 1) / 2; // calculate the number of groups to form

    for (int i = 0; i < num; i++) {
        int j = i;
        while (j < l) {
            output += s[j]; // append the j-th character of s to output
            j += num; // move j by num steps
        }
    }

    return output;
}

string decode_cyclic(string s) {
    string output;
    int l = s.length();
    int num = (l + 1) / 2; // calculate the number of groups formed

    for (int i = 0; i < num; i++) {
        int j = i;
        while (j < l) {
            output += s[j]; // append the j-th character of s to output
            j += num; // move j by num steps
        }
    }

    return output;
}

int main() {
    string str;
    
    // read input from user and store it in 'str'
    getline(cin, str);

    string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);

    return 0;
}