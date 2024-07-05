bool same_chars(string s0, string s1){

    // Create a set to store unique characters
    set<char> chars_s0(s0.begin(), s0.end());
    set<char> chars_s1(s1.begin(), s1.end());

    // Compare the sets
    return chars_s0 == chars_s1;
}