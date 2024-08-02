#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true; // If the vector is empty, it's possible to get a sorted vector
    
    int min_element = *min_element(arr.begin(), arr.end()); // Find the minimum element in the vector
    int min_count = count(arr.begin(), arr.end(), min_element); // Count the number of occurrences of the minimum element
    
    if (min_count == 1) return false; // If the minimum element occurs only once, it's not possible to get a sorted vector
    
    for (int i = 0; i < min_count; i++) {
        arr.erase(remove(arr.begin(), arr.end(), min_element), arr.end()); // Remove all occurrences of the minimum element
    }
    
    return true;
}