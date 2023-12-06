```
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	vector<int> vec = { 18, 1684, 7935, 8896, 6458, 5343, 9088, 7023, 471, 1989, 8864, 6673, 2425, 1489, 3041, 7182, 3934, 5727, 9690 };
	int sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] < 0) {
			cout << "Negative integer encountered: " << vec[i] << endl;
			continue;
		}
		sum += (int)((vec[i] / 3) + 0.5) - 2;
	}
	cout << "The sum of the new integers in the vector is: " << sum << endl;
}
```