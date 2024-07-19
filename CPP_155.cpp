#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) {
	vector<int> result(2, 0);
	string numStr = to_string(abs(num));
	for (char c : numStr) {
		if ((c - '0') % 2 == 0) {
			result[0]++;
		} else {
			result[1]++;
		}
	}
	return result;
}