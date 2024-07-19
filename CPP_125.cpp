vector<string> split_words(string txt){
		vector<string> result;
		int num_odd_chars = 0;
		for(char& c : txt){
			if(islower(c)){
				int char_ord = c - 'a';
				if(char_ord % 2 != 0){
					num_odd_chars++;
				}
			}
		}
		if(txt.find(' ') != string::npos){
			string word = "";
			for(char& c : txt){
				if(c == ' '){
					result.push_back(word);
					word = "";
				}else{
					word += c;
				}
			}
			result.push_back(word);
		}else if(txt.find(',') != string::npos){
			string word = "";
			for(char& c : txt){
				if(c == ','){
					result.push_back(word);
					word = "";
				}else{
					word += c;
				}
			}
			result.push_back(word);
		}else{
			result.push_back(to_string(num_odd_chars));
		}
		return result;
	}