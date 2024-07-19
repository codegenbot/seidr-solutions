map<char, int> histogram(string test){
		map<char, int> freq;
		for (char c : test) {
			if (c != ' '){
				freq[c]++;
			}
		}
		map<char, int> result;
		int max_freq = -1;
		for (const auto &p : freq) {
			if (p.second > max_freq) {
				result.clear();
				result[p.first] = p.second;
				max_freq = p.second;
			} else if (p.second == max_freq) {
				result[p.first] = p.second;
			}
		}
		return result;
	}