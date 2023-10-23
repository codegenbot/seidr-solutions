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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/
bool checkXX(const string& input, int index) {
	if (index + 2 < input.size() && input[index] == 'X' && input[index + 1] == 'X') {
		return true;
	}
	return false;
}
bool checkX(const string& input, int index) {
	if (index + 1 < input.size() && input[index] == 'X') {
		return true;
	}
	return false;
}
bool checkNum(const string& input, int index) {
	if (index < input.size() && input[index] >= '0' && input[index] <= '9') {
		return true;
	}
	return false;
}
bool checkNumAfter(const string& input, int index) {
	if (index + 1 < input.size() && input[index + 1] >= '0' && input[index + 1] <= '9') {
		return true;
	}
	return false;
}
bool checkNumBefore(const string& input, int index) {
	if (index - 1 >= 0 && input[index - 1] >= '0' && input[index - 1] <= '9') {
		return true;
	}
	return false;
}
int getDouble(const string& input, int index) {
	if (index + 2 < input.size() && input[index + 1] == '/') {
		return 10 + input[index + 2] - '0';
	}
	return 0;
}
int getSingle(const string& input, int index) {
	if ((index + 1 < input.size() && input[index + 1] == '/') || (index + 2 < input.size() && input[index + 1] == '-')) {
		return input[index] - '0';
	}
	else if (index + 1 < input.size() && input[index + 1] == 'X') {
		return 10;
	}
	return 0;
}
int getIndex(int index) {
	if (index == 0) {
		return 0;
	}
	return 1;
}
int bowling(string input) {
	// Write your code here
	int index = 0;
	int count = 0;
	int result = 0;
	while (index < input.size() && count < 10) {
		if (checkXX(input, index)) {
			result = result + 20 + getDouble(input, index + 2) + getIndex(index - 2) * input[index - 1] + getIndex(index - 2) * input[index - 3];
		}
		else if (checkX(input, index)) {
			result = result + 10 + getSingle(input, index + 1) + getIndex(index - 1) * input[index - 1];
		}
		else if (checkNumAfter(input, index) && input[index + 1] != '-') {
			result = result + input[index] - '0' + input[index + 1] - '0';
		}
		else if (checkNum(input, index)) {
			result = result + input[index] - '0';
		}
		index++;
		if (checkX(input, index - 1) || input[index] == '/') {
			count++;
		}
	}
	return result;
}
int main() {
	cout << bowling("5/5/5/5/5/5/5/5/5/5/5") << endl; //expect 150
	cout << bowling("XXXXXXXXXXXX") << endl;//expect 300
	cout << bowling("5/545-/X55XXX 25") << endl;
	cout << bowling("25") << endl;
	cout << bowling("---------X") << endl;
	cout << bowling("X") << endl;
	cout << bowling("XXX") << endl;
	cout << bowling("----------") << endl;
	cout << bowling("9-9-9-9-9-9-9-9-9-9-") << endl;
	cout << bowling("5/4-5-4-X4-5-") << endl;
	cout << bowling("5/5-4/5/5-4/") << endl;
	cout << bowling("XX9-9-9-9-9-9-9-9-9-") << endl;
	cout << bowling("X--9-9-9-9-9-9-9-9-9-") << endl;
	cout << bowling("--------------------") << endl;
	cout << bowling("X-X-X-X-X-X-X-X-X-X-XX") << endl;
	cout << bowling("X-X-X-X-X-X-X-X-X-X--") << endl;
	cout << bowling("5-5-5-5-5-5-5-5-5-5-/-5") << endl;
	cout << bowling("X-X-X-X-X-X-X-X-X-5/XX") << endl;
	cout << bowling("X-X-X-X-X-X-X-X-X-/X5/") << endl;
	cout << bowling("X-X-X-X-X-X-X-X-X-XXX3") << endl;
	cout << bowling("XXXXXXXXXXXXnnXXnnXXnnXXnnXXXXXXXXXXXX") << endl;
	cout << bowling("XXnnXnnXnnXnnXnnXnnXnnXnnXnnXnnXnnXnnXnn") << endl;
	cout << bowling("44444444444444444444444444444444444444444") << endl;
	cout << bowling("XXXXXXnnXXXXXXnnXXXXXXnnXXXXXXnnXXXXXXnn") << endl;
	return 0;
}
