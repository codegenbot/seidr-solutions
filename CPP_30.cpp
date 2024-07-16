#include <vector>

vector<float> result;
for (float num : l) {
    if (num > 0) {
        result.push_back(num);
    }
}
return result;

#include <vector>

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}