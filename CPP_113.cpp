#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> odd_count(const std::vector<std::string>& lst)
{
    std::vector<std::string> result;
    for (const std::string& str : lst)
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
    return result;
}

int main()
{
    std::vector<std::string> expected = {
        "the number of odd elements 1 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    };

    std::vector<std::string> result = odd_count({"271", "137", "314"});
    assert(result == expected);

    return 0; // indicate successful completion
}