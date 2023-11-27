#include <iostream>
#include <vector>
#include <unordered_set>

bool triples_sum_to_zero(vector<int> l) {
    // Check if the vector has less than 3 elements
    if (l.size() < 3) {
        return false;
    }

    // Add all elements of the vector to a set
    unordered_set<int> set(l.begin(), l.end());

    // Iterate over each pair of elements in the vector
    for (int i = 0; i < l.size() - 2; i++) {
        for (int j = i + 1; j < l.size() - 1; j++) {
            // Calculate the third element required to sum to zero
            int thirdElement = -(l[i] + l[j]);

            // Check if the third element exists in the set and is distinct from the other two elements
            if (set.count(thirdElement) && thirdElement != l[i] && thirdElement != l[j]) {
                return true; // Found three elements that sum to zero
            }
        }
    }

    return false; // Did not find three elements that sum to zero
}