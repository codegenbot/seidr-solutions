#include <vector>
using namespace std;

vector<pair<int, string>> by_length(vector<int> arr) {
    vector<pair<int, string>> result;
    for(int i: arr){
        if(i >= 1 && i <= 9)result.push_back({i, to_string(i) + " - " + (i == 1 ? "One" : i == 2 ? "Two" : i == 3 ? "Three" : i == 4 ? "Four" : i == 5 ? "Five" : i == 6 ? "Six" : i == 7 ? "Seven" : i == 8 ? "Eight" : "Nine")});
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    return 0;
}