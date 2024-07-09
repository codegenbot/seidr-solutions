#include <vector>
using namespace std;

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = (a <= b ? a : b); i != (a > b ? a : b); i += (a <= b ? 1 : -1)) {
        string str = to_string(i);
        for (char c : str) {
            if (c - '0' % 2 == 0)
                result.push_back(i);
        }
    }
    return result;
}