#include <algorithm>
#include <map>
#include <string>
#include <vector>

int main() {
    using namespace std;

    string sort_numbers(string numbers) {
        map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                        {"eight", 8}, {"nine", 9}};
        vector<string> num_list;
        string temp;

        for (char &c : numbers) {
            if (isalpha(c)) {
                temp += c;
                continue;
            }
            if (!temp.empty()) {
                num_list.push_back(temp);
                temp = "";
            }
        }
        if (!temp.empty())
            num_list.push_back(temp);

        sort(num_list.begin(), num_list.end(),
             [&number_map](const string &a, const string &b) {
                 return number_map.at(a) < number_map.at(b);
             });

        string result;
        for (const string &s : num_list)
            result += s + " ";
        return result.substr(0, result.size() - 1);
    }

    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}