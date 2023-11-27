#include <map>

bool issame(map<char, int> a, map<char, int> b);

map<char, int> histogram(string test);

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            if (!letter.empty()) {
                result[letter]++;
                letter = "";
            }
        }
    }
    if (!letter.empty()) {
        result[letter]++;
    }
    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    // Uncomment the test cases below
    /*
    string test1 = "hello world";
    map<char, int> result1 = histogram(test1);
    // Expected output: {'h': 1, 'e': 1, 'l': 3, 'o': 2, 'w': 1, 'r': 1, 'd': 1}
    for (auto it = result1.begin(); it != result1.end(); it++) {
        cout << "{'" << it->first << "': " << it->second << "} ";
    }
    cout << endl;

    string test2 = "apple";
    map<char, int> result2 = histogram(test2);
    // Expected output: {'a': 1, 'p': 2, 'l': 1, 'e': 1}
    for (auto it = result2.begin(); it != result2.end(); it++) {
        cout << "{'" << it->first << "': " << it->second << "} ";
    }
    cout << endl;

    string test3 = "";
    map<char, int> result3 = histogram(test3);
    // Expected output: {}
    for (auto it = result3.begin(); it != result3.end(); it++) {
        cout << "{'" << it->first << "': " << it->second << "} ";
    }
    cout << endl;

    map<char, int> a = {{'a', 1}, {'b', 2}, {'c', 3}};
    map<char, int> b = {{'a', 1}, {'b', 2}, {'c', 3}};
    bool same1 = issame(a, b);
    // Expected output: true
    cout << same1 << endl;

    map<char, int> c = {{'a', 1}, {'b', 2}, {'c', 3}};
    map<char, int> d = {{'a', 1}, {'b', 2}, {'c', 4}};
    bool same2 = issame(c, d);
    // Expected output: false
    cout << same2 << endl;
    */

    return 0;
}