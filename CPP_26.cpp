#include <vector>
#include <algorithm>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int number : numbers) {
        if (find(result.begin(), result.end(), number) == result.end()) {
            result.push_back(number);
        }
    }
    return result;
}