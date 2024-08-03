#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
	return a == b;
}

std::vector<int> even_odd_palindrome(int n) {
	int even = 0, odd = 0;
	for (int i = 1; i <= n; ++i) {
		std::string num = std::to_string(i);
		std::string rev_num = num;
		std::reverse(rev_num.begin(), rev_num.end());
		if (num == rev_num) {
			if (i % 2 == 0) {
				even++;
			} else {
				odd++;
			}
		}
	}
	return std::vector<int>{ even, odd };
}

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;

	std::vector<int> result = even_odd_palindrome(n);
	std::cout << "Even palindromes: " << result[0] << std::endl;
	std::cout << "Odd palindromes: " << result[1] << std::endl;

	assert(issame(result, even_odd_palindrome(n)));

	return 0;
}