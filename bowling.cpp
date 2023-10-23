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

int main() {
    string input;
    while (cin >> input) {
        int total = 0;
        int i = 0;
        while (i < input.size()) {
            if (input[i] == 'X') {
                total += 10;
                if (i + 1 < input.size()) {
                    if (input[i + 1] == 'X') {
                        total += 10;
                        if (i + 2 < input.size()) {
                            if (input[i + 2] == 'X') {
                                total += 10;
                            } else {
                                total += input[i + 2] - '0';
                            }
                        }
                    } else if (input[i + 1] == '/') {
                        total += 10;
                    } else {
                        total += input[i + 1] - '0';
                    }
                }
            } else if (input[i] == '/') {
                total += 10;
                total += input[i + 1] - '0';
            } else {
                total += input[i] - '0';
            }
            i++;
        }
        cout << total << endl;
    }
    return 0;
}
