#include <string>
#include <map>

vector<string> by_length(vector<int> arr) {
    vector<int> sorted;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted.push_back(num);
        }
    }

    sort(sorted.begin(), sorted.end());
    reverse(sorted.begin(), sorted.end());

    vector<string> result;
    map<int, string> numberName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"},
                                    {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    for (int num : sorted) {
        result.push_back(numberName[num]);
    }

    return result;
}