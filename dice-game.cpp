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
1
2
output:
1.0
input: 
100
output:
99
input:
100
99
output:
0.49
input:
1
100
output:
0.0
*/
int main() {
	int N, M;
	cin >> N >> M;
	if (N == 1) {
		cout << "0.0" << endl;
	}
	else if (M == 1) {
		cout << "1.0" << endl;
	}
	else {
		double p = 1.0 / (N * 1.0);
		double q = 1.0 / (M * 1.0);
		double p_win = 0.0;
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= M; j++) {
				if (i > j) p_win += p * q; // p_win += p * q;
			}
		}
		cout << p_win << endl;
	}
	return 0;
}
