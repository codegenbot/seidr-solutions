#include <algorithm>
float max = l.front();
for (size_t i = 1; i < l.size(); i++) {
    if (l[i] > max) {
        max = l[i];
    }
}
return *std::max_element(l.begin(), l.end());