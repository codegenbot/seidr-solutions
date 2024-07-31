#include <vector>

using namespace std;

bool issame(const int& a, const int& b)
{
    return a == b;
}

vector<int> maximum(vector<int>& arr, int k)
{
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main()
{
    vector<int> arr = {2, 4, 1, 6, 3, 5};
    int k = 3;
    vector<int> result = maximum(arr, k);
    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}