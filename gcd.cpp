int main() {
    // Calculate and output the gcd of 175443 and 398651
    cout << "GCD: " << gcd(175443, 398651) << endl;

    // Find and output the indices of substring "398651" in "175443"
    vector<int> result = indicesOfSubstring("175443", "398651");
    cout << "Indices of Substring: ";
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}