```
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool compare_vectors(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(compare_vectors(even_odd_count(0), vector<int>{1, 0}));
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> result = even_odd_count(num);
    cout << "Even count: " << result[0] << endl;
    cout << "Odd count: " << result[1] << endl;
    return 0;
}

vector<int> even_odd_count(int num) {
    vector<int> result(2);
    if (num == 0) {
        return {1, 0};
    }
    string str = to_string(abs(num));
    for (char c : str) {
        if ((c - '0') % 2 == 0)
            result[0]++;
        else
            result[1]++;
    }
    return result;
}