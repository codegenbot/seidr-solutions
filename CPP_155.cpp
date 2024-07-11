#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a[0] == b[0]) && (a[1] == b[1]);
}

vector<int> even_odd_count(int num) {
    int even = 0, odd = 0;
    string str = to_string(abs(num));
    for (char c : str) {
        if (stoi(string(1, c)) % 2 == 0)
            even++;
        else
            odd++;
    }
    vector<int> result({even, odd});
    return result;
}