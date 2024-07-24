vector<int> filter_integers(list_any values){
		vector<int> result;
		for(const auto& val : values){
			if(typeid(int) == val.type()){
				result.push_back(boost::any_cast<int>(val));
			}
		}
		return result;
	}