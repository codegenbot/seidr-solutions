#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

vector<string> by_length(vector<int> arr);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}

vector<string> by_length(vector<int> arr){
    vector<string> result;
    map<int, string> num_map;
    num_map[1] = "One";
    num_map[2] = "Two";
    num_map[3] = "Three";
    num_map[4] = "Four";
    num_map[5] = "Five";
    num_map[6] = "Six";
    num_map[7] = "Seven";
    num_map[8] = "Eight";
    num_map[9] = "Nine";

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            result.push_back(num_map[arr[i]]);
        }
    }

    reverse(result.begin(), result.end());

    return result;
}