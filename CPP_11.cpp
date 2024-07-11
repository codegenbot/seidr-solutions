string s1, s2;
    cout << "Enter the first binary number: ";
    cin >> s1;
    cout << "Enter the second binary number: ";
    cin >> s2;

    while (s1.length() < s2.length()) {
        s1 = '0' + s1;
    }
    while (s2.length() < s1.length()) {
        s2 = '0' + s2;
    }

    string xorResult = "";
    for(int i=0; i<s1.length(); i++) {
        if ((s1[i]-'0') ^ (s2[i]-'0')) {
            xorResult += "1";
        } else {
            xorResult += "0";
        }
    }
    cout << "XOR of two binary numbers: " << xorResult << endl;
    return 0;
}