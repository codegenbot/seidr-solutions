#include <iostream>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> levels;
    int stones = n;
    for (int i = 0; i < n; i++) {
        levels.push_back(stones);
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
    }
    return levels;
}

vector<int> expected = {8, 10, 12, 14, 16, 18, 20, 22};

int contest_main() {
    vector<int> result = make_a_pile(8);
    if (issame(result, expected)) {
        cout << "Test case passed!" << endl;
    } else {
        cout << "Test case failed!" << endl;
    }
    return 0;
}

int main() {
    contest_main();
    return 0;
}