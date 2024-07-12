#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> max_until_now;
    int current_max = INT_MIN;
    
    for (int num : numbers) {
        if (num > current_max) {
            current_max = num;
        }
        max_until_now.push_back(current_max);
    }
    
    return max_until_now;
}