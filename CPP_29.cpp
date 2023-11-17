/*
Filter an input vector of strings only for ones that start with a given prefix.
>>> filter_by_prefix({}, "a")
{}
>>> filter_by_prefix({"abc", "bcd", "cde", "vector"}, "a")
{"abc", "vector"}
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<string> filter_by_prefix(vector<string> strings, string prefix){

    vector<string> result;
    for(auto i:strings)
    {
        if(i.substr(0,prefix.size())==prefix)
        {
            result.push_back(i);
        }
    }
    return result;
}
int main()
{
    return 0;
}
