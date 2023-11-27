#include <string>

bool simplify(string x, string n) {
    int x_num = stoi(x.substr(0, x.find('/')));
    int x_den = stoi(x.substr(x.find('/') + 1));
    int n_num = stoi(n.substr(0, n.find('/')));
    int n_den = stoi(n.substr(n.find('/') + 1));

    int result_num = x_num * n_num;
    int result_den = x_den * n_den;

    return result_num % result_den == 0;
}

int main() {
    // Test the simplify function separately
    bool test1 = simplify("1/5", "1/5");
    bool test2 = simplify("2/3", "3/4");
    bool test3 = simplify("5/6", "4/5");

    // Print the results
    cout << "Test 1: " << (test1 ? "True" : "False") << endl;
    cout << "Test 2: " << (test2 ? "True" : "False") << endl;
    cout << "Test 3: " << (test3 ? "True" : "False") << endl;

    return 0;
}