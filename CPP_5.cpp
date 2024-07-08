#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> numbers, int delimiter){
	assert(!numbers.empty());
	std::vector<int> result;
	for(size_t i = 0; i < numbers.size() - 1; ++i){
		result.push_back(numbers[i]);
		result.push_back(delimiter);
	}
	result.push_back(numbers[numbers.size() - 1]);
	return result;
}