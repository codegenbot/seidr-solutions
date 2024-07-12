#include <cassert>
#include <string>
#include <vector>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main()
{
    vector<string> result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");
    assert(result == vector<string>{"xxx", "xxxAAA", "xxx"});
    
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix)
{
    vector<string> result;
    for(const string &str : strings) {
        if(str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}