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
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
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
    string input;
    getline(cin, input);
    while(!cin.eof()) {
    	stack<string> stack;
    	bool flag = false;
    	size_t index1 = input.find("-");
    	size_t index2 = input.find(" ");
    	string sub;
    	if (index1 == string::npos && index2 == string::npos) {
    		cout << input << endl;
    		getline(cin, input);
    		continue;
    	} else if (index1 != string::npos && index2 == string::npos) {
    		sub = input.substr(0, index1);
    		stack.push(sub);
    		int i = index1 + 1;
    		sub = "";
    		while (i < input.length()) {
    			sub += input[i];
    			i++;
    			index1 = input.find("-", i);
    			if (index1 == string::npos) {
    				while (i < input.length()) {
    					sub += input[i];
    					i++;
    				}
    				stack.push(sub);
    				break;
    			}
    			stack.push(sub);
    			sub = "";
    			i = index1 + 1;
    		}
    	} else if (index1 == string::npos && index2 != string::npos) {
    		sub = input.substr(0, index2);
    		stack.push(sub);
    		int i = index2 + 1;
    		sub = "";
    		while (i < input.length()) {
    			sub += input[i];
    			i++;
    			index2 = input.find(" ", i);
    			if (index2 == string::npos) {
    				while (i < input.length()) {
    					sub += input[i];
    					i++;
    				}
    				stack.push(sub);
    				break;
    			}
    			stack.push(sub);
    			sub = "";
    			i = index2 + 1;
    		}
    	} else if (index1 != string::npos && index2 != string::npos) {
    		if (index1 < index2) {
    			sub = input.substr(0, index1);
    			stack.push(sub);
    			int i = index1 + 1;
    			sub = "";
    			while (i < input.length()) {
    				sub += input[i];
    				i++;
    				index1 = input.find("-", i);
    				if (index1 == string::npos) {
    					while (i < input.length()) {
    						sub += input[i];
    						i++;
    					}
    					stack.push(sub);
    					break;
    				}
    				index2 = input.find(" ", i);
    				if (index2 < index1) {
    					stack.push(sub);
    					flag = true;
    					break;
    				}
    				stack.push(sub);
    				sub = "";
    				i = index1 + 1;
    			}
    			i = index2 + 1;
    			sub = "";
    			while (i < input.length()) {
    				sub += input[i];
    				i++;
    				index2 = input.find(" ", i);
    				if (index2 == string::npos) {
    					while (i < input.length()) {
    						sub += input[i];
    						i++;
    					}
    					stack.push(sub);
    					break;
    				}
    				stack.push(sub);
    				sub = "";
    				i = index2 + 1;
    			}
    		} else {
    			sub = input.substr(0, index2);
    			stack.push(sub);
    			int i = index2 + 1;
    			sub = "";
    			while (i < input.length()) {
    				sub += input[i];
    				i++;
    				index2 = input.find(" ", i);
    				if (index2 == string::npos) {
    					while (i < input.length()) {
    						sub += input[i];
    						i++;
    					}
    					stack.push(sub);
    					break;
    				}
    				index1 = input.find("-", i);
    				if (index1 < index2) {
    					stack.push(sub);
    					flag = true;
    					break;
    				}
    				stack.push(sub);
    				sub = "";
    				i = index2 + 1;
    			}
    			i = index1 + 1;
    			sub = "";
    			while (i < input.length()) {
    				sub += input[i];
    				i++;
    				index1 = input.find("-", i);
    				if (index1 == string::npos) {
    					while (i < input.length()) {
    						sub += input[i];
    						i++;
    					}
    					stack.push(sub);
    					break;
    				}
    				stack.push(sub);
    				sub = "";
    				i = index1 + 1;
    			}
    		}
    	}
    	if (flag) stack.pop();
    	string ans = "";
    	stack.pop();
    	while (!stack.empty()) {
    		ans += stack.top();
    		stack.pop();
    	}
    	for (int i = 0; i < ans.length(); i++) {
    		if (i == 0) {
    			cout << (char)toupper(ans[i]);
    		} else {
    			cout << ans[i];
    		}
    	}
    	cout << endl;
    	getline(cin, input);
    }
    return 0;
}
