vector<int> depths;
	int current_depth = 0;
	for (char c : paren_string) {
		if (c == '(') {
			current_depth++;
			depths.push_back(current_depth);
		} else if (c == ')') {
			current_depth--;
			depths.push_back(current_depth);
		}
	}
	
	int max_depth = 0;
	for (int depth : depths) {
		if (depth > max_depth) {
			max_depth = depth;
		}
	}

	return depths;
}