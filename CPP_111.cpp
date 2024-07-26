map<char, int> histogram(string test){
	    map<char, int> result;
	    istringstream iss(test);
	    string word;
	    while (iss >> word) {
	        for (char c : word) {
	            result[c]++;
	        }
	    }
	    int maxCount = 0;
	    for (const auto& it : result) {
	        maxCount = max(maxCount, it.second);
	    }
	    map<char, int> maxChars;
	    for (const auto& it : result) {
	        if (it.second == maxCount) {
	            maxChars[it.first] = it.second;
	        }
	    }
	    return maxChars;
	}