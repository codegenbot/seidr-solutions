#include <vector>
#include <set>

using namespace std;

vector<int> generate_integers(int a, int b) {
    set<int> evenDigits;
    for (int i = min(a, b); i <= max(a, b); i++) {
        if (i % 2 == 0) {
            evenDigits.insert(i);
        }
    }
    vector<int> result(evenDigits.begin(), evenDigits.end());
    return result;
}