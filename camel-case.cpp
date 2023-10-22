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
Take a string in kebab-case and convert all of the words to camelCase. 
Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
*/
int main() {
	string str;
	int i = 0;
	string temp;
	string final;
	getline(cin,str);
	if(str.find('-') == -1)
	{
		cout << str << endl;
		return 0;
	}
	for(;i < str.size();i++)
	{
		if(str[i] == '-')
		{
			temp[0] = toupper(temp[0]);
			final += temp;
			temp.clear();
			continue;
		}
		if(str[i] == ' ')
		{
			final += " ";
			temp.clear();
			continue;
		}
		temp += str[i];
	}
	temp[0] = toupper(temp[0]);
	final += temp;
	cout << final << endl;
	return 0;
}
