#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

int odd_count(std::vector<std::string> lst)
{
    int total_count = 0;
    for (std::string str : lst)
    {
        int current_count = 0;
        for (char c : str)
        {
            if ((c - '0') % 2 != 0)
            {
                current_count++;
            }
        }
        total_count += current_count;
    }
    return total_count;
}

int main()
{
    assert(std::equal(odd_count({"271", "137", "314"}), {3, 2, 3}));
    return 0;
}