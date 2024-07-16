string result;
	if (strings.empty())
		return "None";
	result = strings[0];
	for (int i = 1; i < strings.size(); ++i) {
		if (strings[i].length() > result.length() || (strings[i].length() == result.length() && strings[i] < result)) {
			result = strings[i];
		}
	}
	return result;
}