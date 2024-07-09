#include <string>
#include <map>

using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            map<int, string> numMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                        {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                        {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
            result.push_back(numMap[i]);
        }
    }

    reverse(result.begin(), result.end());
    
    return result;
}