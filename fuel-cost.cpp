#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	vector<int> vec = {18, 1684, 7935, 8896, 6458, 5343, 9088, 7023, 471, 1989, 8864, 6673, 2425, 1489, 3041, 7182, 3934, 5727, 9690};
	for (int i = 0; i < vec.size(); i++) {
		vec[i] = round(vec[i] / 3) - 2;
	}
	int sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	cout << "The sum of the new integers in the vector is: " << sum << endl;
	return 0;
}