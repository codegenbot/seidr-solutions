#include <limits>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float minDiff = numeric_limits<float>::max();
    float closestPair[2];
    
    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestPair[0] = numbers[i];
            closestPair[1] = numbers[i + 1];
        }
    }
    
    return vector<float>(closestPair, closestPair + 2);
}