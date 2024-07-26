map<char, int> histogram(string test) {
		map<char, int> result;
		map<char, int> count;
		int maxCount = 0;
		
		for (char c : test) {
			if (c != ' ') {
				count[c]++;
				maxCount = max(maxCount, count[c]);
			}
		}
		
		for (auto& pair : count) {
			if (pair.second == maxCount) {
				result[pair.first] = pair.second;
			}
		}
		
		return result;
	}