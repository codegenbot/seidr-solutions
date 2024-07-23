#include <algorithm>
using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenNumbers(l.begin() + i, l.begin() + i + 1);
            sort(evenNumbers.begin(), evenNumbers.end());
            result.push_back(evenNumbers[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}