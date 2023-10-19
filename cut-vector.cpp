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
Given an n×n grid and some input data, find the coordinates of all grid cells that match the input data.
Examples:
gridString="Hello"
input="el"
1 =∫ 1 0

gridString="Goodbye"
For your convenience, each letter in gridString is represented as its equivalent int, e.g., 'G' = 71, 'o' = 111, 'o' = 111, 'd' = 100, 'b' = 98, 'y' = 121 and 'e' = 101.
input=[111, 100, 121]
1 2 3
3 1 3
2 3 3

gridString="abcdefghijklm"
input=[100, 99, 105, 106]
1 2 2 1
2 3 4 1
2 4 5 1
2 4 3 4

gridString=""
input=[0]
0

*/
int main() {
    string bars = "Hello";
    char s[] = "fe";
    char s2[] = {'f', 'e'};
    char input[] = "el";
    int row = ((int)bars[0]-39)/12+1;
    int col = ((int)bars[0]-39)%12;
    cout << row << " " << col << endl;
    cout << (int)'G' << " " << (int)'o' << " " << (int)'o' << " " << (int)'d' << " " << (int)'b' << " " << (int)'y' << " " << (int)'e' << endl;
    for(int i=0; i<strlen(input); i++) {
    }
    cout << row << " " << col << endl;
    cout << strlen(input) << endl;
    cout << sizeof(s) << endl;//3:2 + 1 for '\0', 2+'\0'
    cout << sizeof(s2) << endl;//5:2 + 3 for '\0'
    return 0;
}
