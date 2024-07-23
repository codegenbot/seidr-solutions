```cpp
#include <iostream>
#include <vector>
#include <string>

size_t gcd(size_t a, size_t b) {
    while (b != 0) {
        size_t temp = b;
        b = a % b;
        a = temp;
    }
    return min(a, b);
}

vector<size_t> indicesOfSubstring(string text, string target) {
    vector<string> result;
    size_t n = text.length();
    size_t m = target.length();

    for (size_t i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            string index = to_string(i);
            result.push_back(index);
            while ((i + m) <= n && text.substr(i, m) == target)
                i++; // Handle overlapping occurrences
        }
    }

    return vector<size_t>(transform(result.begin(), result.end(), [](const string& s) { return stol(s); }));
}

int main() {
    string text = "Hello World";
    string target = "World";

    vector<size_t> result = indicesOfSubstring(text, target);
    cout << "Indices: ";
    for (size_t i : result)
        cout << i << " ";
    cout << endl;

    size_t GCD = gcd((size_t)text.length(), (size_t)target.length());
    cout << "GCD of text and target: " << GCD << endl;
}