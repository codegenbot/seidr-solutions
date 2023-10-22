#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
*/

static std::random_device rd;
static std::mt19937 gen(rd());

double randomDouble(double min, double max) {
	std::uniform_real_distribution<double>u(min, max);
	return u(gen);
}

int randomInt(int min, int max) {
	std::uniform_int_distribution<int>u(min, max);
	return u(gen);
}

void test1() {
	int m = 1000000;
	int n1 = 2, n2 = 2;
	int p1 = 0, p2 = 0;
	for (int i = 0; i < m; ++i) {
		int num1 = randomInt(1, n1);
		int num2 = randomInt(1, n2);
		if (num1 > num2) ++p1;
		if (num2 > num1) ++p2;
	}
	double res1 = (double)p1 / (double)m;
	double res2 = (double)p2 / (double)m;
	cout << res1 << endl;
	cout << res2 << endl;
}

int main() {
	test1();
	return 0;
}
