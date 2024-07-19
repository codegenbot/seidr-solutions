#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
  // Your implementation here
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
	sort(lst.begin(), lst.end());
	vector<int> result;
	int left = 0, right = lst.size() - 1;
	while (left <= right) {
		result.push_back(lst[left++]);
		if (left <= right) {
			result.push_back(lst[right--]);
		}
	}
	return result;
}