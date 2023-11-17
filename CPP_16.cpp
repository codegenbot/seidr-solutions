/*
Given a string, find out how many distinct characters (regardless of case) does it consist of
>>> count_distinct_characters("xyzXYZ")
3
>>> count_distinct_characters("Jerry")
4
*/
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int count_distinct_characters(string str){
	vector<char> s;
	for(int i = 0; i < str.size(); i++){
		if(find(s.begin(), s.end(), tolower(str[i])) == s.end()){
			s.push_back(tolower(str[i]));
		}
	}
	return s.size();
}
int main(){
	cout << count_distinct_characters("xyzXYZ") << endl;
	cout << count_distinct_characters("Jerry") << endl;
	return 0;
}
