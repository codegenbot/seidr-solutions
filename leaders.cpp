#include <climits> // Add this header

int maxRight = std::numeric_limits<int>::min(); // Update variable initialization

std::copy(leaders.rbegin(), leaders.rend(), std::back_inserter(leaders)); // Use std::copy instead of std::reverse_copy