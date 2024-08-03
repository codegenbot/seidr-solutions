bool is_palindrome(string text) {
	int n = text.size();
	for (int i = 0; i < n / 2; i++) {
		if (text[i] != text[n - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main() {
	assert(is_palindrome("xywzx") == false);
	return 0;
}