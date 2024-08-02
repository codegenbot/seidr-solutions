#include <climits>

int maxRight = std::numeric_limits<int>::min();

std::copy(leaders.rbegin(), leaders.rend(), std::back_inserter(leaders));