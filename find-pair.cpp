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
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
57
input:
2
2500 6352
8852
output:
25006352
input:
2
-14 5
-9
output:
-145
input:
2
40 -19
21
output:
40-19
input:
2
-4 4
0
output:
-44
*/

void print(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void print(vector<vector<int> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<string> > &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void print(vector<string> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void print(vector<bool> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void print(vector<vector<bool> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<vector<bool> > > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<vector<int> > > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<vector<string> > > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<string> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<vector<bool> > > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<vector<int> > > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<vector<string> > > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<string> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<bool> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<int> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<string> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<bool> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<int> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<string> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<bool> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<int> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<string> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<bool> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<int> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<string> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<bool> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<int> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<string> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<bool> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<int> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<string> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<bool> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<int> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

void print(vector<vector<string> > &v) {
    for (int i = 0; i < v.size(); i++) {
        print(v[i]);
    }
}

int main() {
