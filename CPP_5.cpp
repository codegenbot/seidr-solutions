vector<int> interspersed;
	if (numbers.empty()) {
		return interspersed;
	}

	int n = numbers.size();
	for (int i = 0; i < n - 1; ++i) {
		interspersed.push_back(numbers[i]);
		interspersed.push_back(delimeter);
	}
	interspersed.push_back(numbers[n - 1]);

	return interspersed;