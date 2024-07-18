#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> arr);

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sort_array(vector<int> arr) {
	sort(arr.begin(), arr.end(), [](auto a, auto b) mutable {
		return __builtin_popcount(a) == __builtin_popcount(b) ? a < b : __builtin_popcount(a) < __builtin_popcount(b);
	});
	return arr;
}