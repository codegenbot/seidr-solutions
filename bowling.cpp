int score(const string& str) {
	int totalScore = 0;
	int frame = 0;
	for (int i = 0; i < str.length() && frame < 10; ++i) {
		if (str[i] == 'X') {
			totalScore += 10;
			if (i + 1 < str.length() && str[i + 1] == 'X') {
				totalScore += 10;
				if (i + 2 < str.length() && str[i + 2] == 'X') {
					totalScore += 10;
				} else if (i + 2 < str.length() && str[i + 2] != '/') {
					totalScore += str[i + 2] - '0';
				}
			} else {
				if (i + 2 < str.length() && str[i + 2] == '/') {
					totalScore += 10;
				} else if (i + 2 < str.length() && str[i + 2] != '/') {
					totalScore += str[i + 1] - '0';
					if (i + 2 < str.length() && str[i + 2] != '/') {
						totalScore += str[i + 2] - '0';
					}
				}
			}
			++frame;
		} else if (str[i] == '/') {
			totalScore += 10 - (str[i - 1] - '0');
			if (i + 1 < str.length() && str[i + 1] == 'X') {
				totalScore += 10;
			} else if (i + 1 < str.length() && str[i + 1] != '/') {
				totalScore += str[i + 1] - '0';
			}
			++frame;
		} else {
			totalScore += str[i] - '0';
		}
	}
	return totalScore;
}

int main() {
	string input;
	cin >> input;
	cout << score(input) << endl;
	return 0;
}