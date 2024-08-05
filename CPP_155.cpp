#include <vector>
#include <string>

vector<int> even_odd_count(int num) {
    vector<int> counts = {0, 0};
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    int x;
    cin >> x;
    if (even_odd_count(x)==(even_odd_count(155))) {
        cout << "Counts are same";
    }
}