vector<float> l_prime = l;
	vector<float> sorted_even;
	for (int i = 0; i < l.size(); i++) {
		if (i % 2 == 0) {
			sorted_even.push_back(l[i]);
		}
	}
	sort(sorted_even.begin(), sorted_even.end());
	int j = 0;
	for (int i = 0; i < l.size(); i++) {
		if (i % 2 == 0) {
			l_prime[i] = sorted_even[j];
			j++;
		}
	}
	return l_prime;
}