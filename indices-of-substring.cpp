
// Improved version of indices-of-substring
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Declare variables
    int i = 0, j = 1;
    vector<int> result;

    // Get input string and target string from user
    string text, target;
    cin >> text >> target;

    for (i = 0; i < text.size(); ++i)
    {
        if (text[i] == target[0])
        {
            j = 1;
            while (j < target.size() && text[i + j] == target[j])
            {
                ++j;
            }
            if (j == target.size())
            {
                result.push_back(i);
            }
        }
    }

    // Output the resulting vector of indices
    cout << "Indices of substring: ";
    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << endl;
}