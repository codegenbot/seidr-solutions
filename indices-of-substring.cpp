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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!\n!
output:
1\n0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
*/

//题目是说给一个字符串和一个子字符串，返回子字符串在字符串中出现的位置，要求算法复杂度为O(n)。
//比如给一个字符串"ababababab"和子字符串"aba"，要返回子字符串在字符串中出现的位置{0,2,4,6,8}。

//思路：
//用指针i，j指向两个字符串的首字母，如果字符串一的第i个字符和字符串二的第j个字符相等，则i++，j++，
//如果不相等，i++，j=0，并且把i的值赋给j，继续比较，直到字符串二的最后一个字符比较完，
//则说明字符串二是字符串一的子串，返回i-j的值，否则返回-1。
//这个算法的时间复杂度是O(n)，空间复杂度是O(1)。

//算法描述如下：
//1. 判断字符串一的第一个字符是否和字符串二的第一个字符相等，如果不相等，则判断字符串一的第二个字符和字符串二的第一个字符是否相等，
//如果不相等，则判断字符串一的第三个字符和字符串二的第一个字符是否相等，以此类推。
//2. 如果字符串一的第i个字符和字符串二的第一个字符相等，则判断字符串一的第i+1个字符和字符串二的第二个字符是否相等，
//如果不相等，则判断字符串一的第i+2个字符和字符串二的第二个字符是否相等，以此类推。
//3. 如果字符串一的第i+j个字符和字符串二的第j+1个字符相等，则判断字符串一的第i+j+1个字符和字符串二的第j+2个字符是否相等，
//如果不相等，则判断字符串一的第i+j+2个字符和字符串二的第j+2个字符是否相等，以此类推。
//4. 如果字符串二的最后一个字符和字符串一的第i+j个字符相等，则返回i，否则返回-1。

//代码如下：
int strStr(string text, string target)
{
    int i = 0, j = 0;
    while(i < text.size())
    {
        if(text[i] == target[j])
        {
            i++;
            j++;
            if(j == target.size())
                return i - j;
        }
        else
        {
            i++;
            j = 0;
        }
    }
    return -1;
}

int main() {
    string text = "ababababab";
    string target = "abab";
    cout << strStr(text, target) << endl;
    return 0;
}
