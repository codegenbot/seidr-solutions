#include <bits/stdc++.h>
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
int main()
{
    string text;
    string target;
    cin >> text;
    cin >> target;
    for (int i = 0; i + target.length() - 1 < text.length(); i++)
    {
        if (text[i] == target[0])
        {
            int j;
            bool success = true;
            for (j = 1; j < target.length(); j++)
            {
                if (text[i + j] == target[j] && success)
                {
                    success = true;
                }
                else
                {
                    success = false;
                    break;
                }
            }
            if (success)
            {
                cout << i << " ";
            }
        }
    }
}
