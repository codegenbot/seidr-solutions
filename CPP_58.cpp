#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	std::vector<int> result;
	std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(result));
	result.erase(std::unique(result.begin(), result.end()), result.end());
	return result;
}