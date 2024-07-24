#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    int sum = 0;

    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            sum += str.length();
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });

    vector<int> sums;
    for (const string& str : result) {
        sums.push_back(str.length());
    }

    sort(sums.begin(), sums.end());

    int total_sum = 0;
    for (int sum : sums) {
        total_sum += sum;
    }

    return result; // Return the original list
}