#include <vector>
#include <climits>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max = INT_MIN; // Use INT_MIN now that it's declared
    
    for (int i : numbers) {
        if (i > max) {
            max = i;
        }
        result.push_back(max);
    }
    
    return result;
}