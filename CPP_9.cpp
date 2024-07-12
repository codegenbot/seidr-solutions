#include <vector>

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int max_seen = numbers[0];
    result.push_back(max_seen);
    
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > max_seen) {
            max_seen = numbers[i];
        }
        result.push_back(max_seen);
    }
    
    return result;
}