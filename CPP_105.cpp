#include <vector>
#include <map>
#include <algorithm>
#include <cassert>
#include <string>

using namespace std;

vector<string> by_length(vector<int> arr);

bool is_same(vector<string> a, vector<string> b);

vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, 
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    vector<int> filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }

    sort(filtered.begin(), filtered.end(), greater<int>());

    for (int num : filtered) {
        result.push_back(num_to_name[num]);
    }

    return result;
}

bool is_same(vector<string> a, vector<string> b){
    return a == b;
}