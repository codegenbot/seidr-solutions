vector<int> result;
	int currentMax = INT_MIN;
	for (int i = 0; i < numbers.size(); ++i) {
		currentMax = max(currentMax, numbers[i]);
		result.push_back(currentMax);
	}
	return result;
}