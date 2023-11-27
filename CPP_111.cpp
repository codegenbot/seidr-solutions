#include <map>

using namespace std;

map<char, int> histogram(string test);
bool issame(map<char, int> a, map<char, int> b);

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
    // Uncomment the test cases below to verify the correctness of the code

    /*
    string test1 = "hello world";
    map<char, int> hist1 = histogram(test1);
    map<char, int> expected1 = {{'h', 1}, {'e', 1}, {'l', 3}, {'o', 2}, {'w', 1}, {'r', 1}, {'d', 1}};
    if (issame(hist1, expected1)) {
        cout << "Test case 1 passed!" << endl;
    } else {
        cout << "Test case 1 failed!" << endl;
    }

    string test2 = "the quick brown fox jumps over the lazy dog";
    map<char, int> hist2 = histogram(test2);
    map<char, int> expected2 = {{'t', 2}, {'h', 2}, {'e', 3}, {'q', 1}, {'u', 2}, {'i', 1}, {'c', 1}, {'k', 1},
                                {'b', 1}, {'r', 2}, {'o', 4}, {'w', 1}, {'n', 1}, {'f', 1}, {'x', 1}, {'j', 1},
                                {'m', 1}, {'p', 1}, {'s', 1}, {'v', 1}, {'l', 1}, {'a', 1}, {'z', 1}, {'y', 1},
                                {'d', 1}, {'g', 1}};
    if (issame(hist2, expected2)) {
        cout << "Test case 2 passed!" << endl;
    } else {
        cout << "Test case 2 failed!" << endl;
    }
    */
    
    return 0;
}