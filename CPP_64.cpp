/*
Write a function vowels_count which takes a string representing a word as input and returns the number of vowels in the string. Vowels in this case are 'a', 'e', 'i', 'o', 'u'. 
Here, 'y' is also a vowel, but only when it is at the end of the given word.
Example: 
>>> vowels_count("abcde") 
2 
>>> vowels_count("ACEDY") 
3
*/
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
int vowels_count(string s)
{
	int count = 0;
	int size = s.size();
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for (int i = 0; i < size; i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			count++;
		if (s[i] == 'y' && i != size - 1)
			continue;
		if (s[i] == 'y' && i == size - 1)
			count++;
	}
	return count;
}
int main()
{
	int count;
	count = vowels_count("abcde");
	printf("%d", count);
	count = vowels_count("ACEDY");
	printf("%d", count);
}
