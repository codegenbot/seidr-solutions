
#include <vector>
#include <string>
#include <cassert>

int odd_count(std::vector<std::string> lst)
{
    int count = 0;
    for (std::string str : lst)
    {
        int odd_count = 0;
        for (char c : str)
        {
            if ((c - '0') % 2 != 0)
            {
                odd_count++;
            }
        }
        count++;
    }
    return count;
}

int main()
{
    assert(odd_count({"271", "137", "314"}) == 3);
    return 0;
}