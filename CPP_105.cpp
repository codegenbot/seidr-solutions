#include <vector>
#include <string>

vector<string> by_length(vector<int> arr);
bool issame(vector<string> a, vector<string> b);

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sorted_arr;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sorted_arr.push_back(arr[i]);
        }
    }

    sort(sorted_arr.begin(), sorted_arr.end());

    reverse(sorted_arr.begin(), sorted_arr.end());

    map<int, string> digit_map;
    digit_map[1] = "One";
    digit_map[2] = "Two";
    digit_map[3] = "Three";
    digit_map[4] = "Four";
    digit_map[5] = "Five";
    digit_map[6] = "Six";
    digit_map[7] = "Seven";
    digit_map[8] = "Eight";
    digit_map[9] = "Nine";

    for(int i = 0; i < sorted_arr.size(); i++){
        result.push_back(digit_map[sorted_arr[i]]);
    }

    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}