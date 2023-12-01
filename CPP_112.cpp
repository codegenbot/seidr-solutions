#include <vector>
#include <string>
using namespace std;

vector<string> reverse_delete(string s, string c);

bool isSame(vector<string> a, vector<string> b)
{
    return a == b;
}

vector<string> reverse_delete(string s, string c)
{
    string result = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (c.find(s[i]) == string::npos)
        {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    return {result, (isPalindrome ? "True" : "False")};
}

int main()
{
    assert(isSame(reverse_delete("mamma", "mia"), {"", "True"}));

    return 0;
}