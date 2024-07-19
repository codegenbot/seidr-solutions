#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (std::bitset<32>(static_cast<uint32_t>(a)).count() == std::bitset<32>(static_cast<uint32_t>(b)).count()) {
            return a < b;
        }
        return std::bitset<32>(static_cast<uint32_t>(a)).count() < std::bitset<32>(static_cast<uint32_t>(b)).count();
    });
    return arr;
}