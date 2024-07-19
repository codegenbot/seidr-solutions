map<char, int> histogram(string test) {
		map<char, int> count;
		string word = "";
		for (char c : test) {
			if (c == ' ') {
				if (!word.empty()) {
					for (char w : word) {
						count[w]++;
					}
					word = "";
				}
			} else {
				word += c;
			}
		}
		if (!word.empty()) {
			for (char w : word) {
				count[w]++;
			}
		}
		
		map<char, int> result;
		int maxCount = 0;
		for (const auto& pair : count) {
			if (pair.second > maxCount) {
				maxCount = pair.second;
				result.clear();
				result[pair.first] = pair.second;
			} else if (pair.second == maxCount) {
				result[pair.first] = pair.second;
			}
		}
		return result;
	}