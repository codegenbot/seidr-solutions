vector<int> res;
	for (int i = 1; i <= n; ++i) {
		if (i % 2 == 0) {
			int fact = 1;
			for (int j = 1; j <= i; ++j) {
				fact *= j;
			}
			res.push_back(fact);
		} else {
			int sum = 0;
			for (int j = 1; j <= i; ++j) {
				sum += j;
			}
			res.push_back(sum);
		}
	}
	return res;