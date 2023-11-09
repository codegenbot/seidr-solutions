/*
Input to this function is a string representing musical notes in a special ASCII format.
Your task is to parse this string and return vector of integers corresponding to how many beats does each
not last.

Here is a legend:
"o" - whole note, lasts four beats
"o|" - half note, lasts two beats
".|" - quater note, lasts one beat

>>> parse_music("o o| .| o| o| .| .| .| .| o o")
{4, 2, 1, 2, 2, 1, 1, 1, 1, 4, 4}
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<int> parse_music(string music_string){ 
	int i=0,count=0;
	vector<int> ans;
	while(i<music_string.size()){
		if(music_string[i]=='o'){
			if(music_string[i+1]==' '){ans.push_back(4);i+=2;}
			else{ans.push_back(2);i+=3;}
		}
		else{
			ans.push_back(1);
			i+=2;
		}
	}
	return ans;
}
