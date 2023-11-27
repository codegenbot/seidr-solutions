#include <iostream>
#include <vector>

using namespace std;

vector<int> generate_integers(int start, int end)
{
    vector<int> result;
    for (int i = start; i <= end; i++) {
        result.push_back(i);
    }
    return result;
}