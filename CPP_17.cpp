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
	vector<int> beats;
	int i = 0;
	while (i < music_string.size()) {
		if (music_string[i] == 'o') {
			if (music_string[i + 1] == ' ') {
				beats.push_back(4);
				i += 2;
			}
			else {
				beats.push_back(2);
				i += 3;
			}
		}
		else {
			beats.push_back(1);
			i += 3;
		}
	}
	return beats;
}
