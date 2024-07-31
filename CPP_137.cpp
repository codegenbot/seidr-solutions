if (a.type() == typeid(int) && b.type() == typeid(int)) {
		if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
			return a;
		} else if (boost::any_cast<int>(b) > boost::any_cast<int>(a)) {
			return b;
		}
	} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
		if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
			return a;
		} else if (boost::any_cast<float>(b) > boost::any_cast<float>(a)) {
			return b;
		}
	} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
		if (std::stof(boost::any_cast<string>(a)) > std::stof(boost::any_cast<string>(b))) {
			return a;
		} else if (std::stof(boost::any_cast<string>(b)) > std::stof(boost::any_cast<string>(a))) {
			return b;
		}
	}
	return "None";
}