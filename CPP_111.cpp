map<char,int> histogram(string test){
	    map<char,int> freq;
	    int max_freq = 0;
	    for(char ch : test){
	        if(ch != ' '){
	            freq[ch]++;
	            max_freq = max(max_freq, freq[ch]);
	        }
	    }
	    map<char,int> result;
	    for(auto it : freq){
	        if(it.second == max_freq){
	            result[it.first] = it.second;
	        }
	    }
	    return result;
	}