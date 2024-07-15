#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> by_length(vector<int> arr);
bool issame(vector<string> a, vector<string> b);

vector<string> by_length(vector<int> arr){
    vector<string> names = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    vector<int> sorted_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }
    sort(sorted_arr.begin(), sorted_arr.end());
    reverse(sorted_arr.begin(), sorted_arr.end());
    vector<string> result;
    for (int num : sorted_arr) {
        result.push_back(names[num - 1]);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}