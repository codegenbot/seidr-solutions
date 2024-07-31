#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int odd_count(std::vector<std::string> lst)
{
    std::vector<std::string> result;
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
        result.push_back("the number of odd elements " + std::to_string(odd_count) + " in the string " + str + " of the input.");
    }
    for (std::string res : result)
    {
        std::cout << res << std::endl;
    }
    return result.size();
}

int main()
{
    assert(odd_count({"271", "137", "314"}) == 3);
    return 0;
}