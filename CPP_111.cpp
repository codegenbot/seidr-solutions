int main() {
    map<char, int> result = histogram("a");

    // Output the result
    for (const auto& pair : result) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}