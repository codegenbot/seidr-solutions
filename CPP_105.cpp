#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    vector<string> result;
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"},
                                      {4, "Four"}, {5, "Five"}, {6, "Six"},
                                      {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    for (int num : arr) {
        string str;
        if (num >= 1 && num <= 9) {
            str = numberNames[num];
        }
        else {
            str = to_string(num);
        }
        result.push_back(str);
    }

    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());

    return result;
}