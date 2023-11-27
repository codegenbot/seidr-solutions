#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> total_match(vector<string> lst1,vector<string> lst2);
bool issame(vector<string> a, vector<string> b);

int main()
{
    vector<string> list1 = {"apple", "banana", "cherry"};
    vector<string> list2 = {"date", "elderberry", "fig"};
    
    if (issame(list1, list2))
    {
        cout << "The two lists are the same.";
    }
    else
    {
        vector<string> result = total_match(list1, list2);
        cout << "The list with the most characters is: ";
        for (string str : result)
        {
            cout << str << " ";
        }
    }
    
    return 0;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2)
{
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for (string str : lst1)
    {
        totalChars1 += str.length();
    }
    
    for (string str : lst2)
    {
        totalChars2 += str.length();
    }
    
    if (totalChars1 < totalChars2)
    {
        return lst1;
    }
    else
    {
        return lst2;
    }
}

bool issame(vector<string> a, vector<string> b)
{
    return a == b;
}