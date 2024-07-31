#include <vector>

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
    return 0;
}

void main()
{
    assert(issame(odd_count({"271", "137", "314"}),
    {
        "the number of odd elements 1 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
}