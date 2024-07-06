int main() {
    int gcdResult = gcd(12, 15); // Call gcd() function with input 12 and 15
    cout << "GCD of 12 and 15 is: " << gcdResult << endl;

    vector<int> indices = indicesOfSubstring("hello", "ll"); // Call indicesOfSubstring() function with input "hello" and "ll"
    for (auto index : indices) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}