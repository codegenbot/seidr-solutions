#include <iostream>
#include <string>
#include <cstring>
#include <vector>
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
!
!
output:
1
0
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
vector<int> findAll(string text, string target){
    vector<int> res;
    int i = 0;
    while(i < text.size()){
        int index = text.find(target, i);
        if(index == -1){
            break;
        }
        res.push_back(index);
        i = index + 1;
    }
    return res;
}
int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = findAll(text, target);
    for(int i = 0; i < res.size(); i++){
        if(i == res.size() - 1){
            cout << res[i] << endl;
        }else{
            cout << res[i] << " ";
        }
    }
    return 0;
}
