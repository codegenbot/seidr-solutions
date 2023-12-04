```
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> separate_paren_groups(string paren_string) {
	vector<string> result;
	int open = 0, close = 0;
	string temp = "";

	for (int i = 0; i < paren_string.size(); i++) {
		if (paren_string[i] == '(') {
			open++;
		} else if (paren_string[i] == ')') {
			close++;
		}

		if (open == close && open > 0) {
			result.push_back(temp);
			temp = "";
			open = 0;
			close = 0;
		} else {
			temp += paren_string[i];
		}
	}

	return result;
}
```
The error message indicates that there are multiple definitions of the `issame` function. This is because the function has been defined twice in the code, once with a different name and once with the same name as the previous definition.  To fix this issue, you can simply remove one of the definitions of the `issame` function.
```
bool issame(vector<string> a, vector<string> b) {
	if (a.size() != b.size()) {
		return false;
	}

	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) {
			return false;
		}
	}

	return true;
}
```