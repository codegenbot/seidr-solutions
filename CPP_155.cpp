#include <vector>

vector<int> even_odd_count(int num) {
    vector<int> counts(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if (c % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

int main() {
    int num;
    cin >> num;
    vector<int> result = even_odd_count(num);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}