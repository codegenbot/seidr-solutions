#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	vector<int> vec = { 1, 6 };
	for (int i = 0; i < vec.size(); i++) {
		vec[i] = (vec[i] / 3);
	}
	int sum = 0;
	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}
	cout << "The sum of the new integers in the vector is: " << sum << endl;
}