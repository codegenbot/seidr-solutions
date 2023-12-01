#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> generate_integers(int a, int b)
{
    std::vector<int> result;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(std::vector<int> nums1, std::vector<int> nums2)
{
    if (nums1.size() != nums2.size())
    {
        return false;
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        if (nums1[i] != nums2[i])
        {
            return false;
        }
    }
    return true;
}