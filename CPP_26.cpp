#include <set>
using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    set<int> s(numbers.begin(), numbers.end());
    vector<int> result;
    for (int i : s) {
        int count = 0;
        for (int j : numbers) {
            if (i == j) {
                count++;
            }
        }
        if (count == 1) {
            result.push_back(i);
        }
    }
    return result;
}