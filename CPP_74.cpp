Here is the modified code:

```cpp
#include <vector>
#include <string>

using namespace std;

bool is_same(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return vector<string>();
}

int main()
{
    assert(is_same(total_match({"this"}, {}), {}));
}