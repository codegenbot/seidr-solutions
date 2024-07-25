if(a.type() == typeid(int) && b.type() == typeid(int)){
		if(boost::any_cast<int>(a) > boost::any_cast<int>(b))
			return a;
		else if(boost::any_cast<int>(a) < boost::any_cast<int>(b))
			return b;
		else
			return "None";
	}
	else if(a.type() == typeid(float) && b.type() == typeid(float)){
		if(boost::any_cast<float>(a) > boost::any_cast<float>(b))
			return a;
		else if(boost::any_cast<float>(a) < boost::any_cast<float>(b))
			return b;
		else
			return "None";
	}
	else if(a.type() == typeid(string) && b.type() == typeid(string)){
		string a_str = boost::any_cast<string>(a);
		string b_str = boost::any_cast<string>(b);
		if(a_str.find(",") != string::npos) {
			replace(a_str.begin(), a_str.end(), ',', '.');
			a = stof(a_str);
		}
		if(b_str.find(",") != string::npos) {
			replace(b_str.begin(), b_str.end(), ',', '.');
			b = stof(b_str);
		}
		if(stof(a_str) > stof(b_str))
			return a_str;
		else if(stof(a_str) < stof(b_str))
			return b_str;
		else
			return "None";
	}
}