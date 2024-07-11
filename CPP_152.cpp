#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

std::vector<int> compare(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return {static_cast<int>(a.size()), static_cast<int>(long(b.size()))};
}