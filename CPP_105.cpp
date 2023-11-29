#include <string>

vector<string> by_length(vector<int> arr){
    vector<int> sorted_arr;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>=1 && arr[i]<=9){
            sorted_arr.push_back(arr[i]);
        }
    }
    sort(sorted_arr.begin(), sorted_arr.end());
    reverse(sorted_arr.begin(), sorted_arr.end());
    vector<string> result;
    map<int, string> digit_map = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for(int i=0; i<sorted_arr.size(); i++){
        result.push_back(digit_map[sorted_arr[i]]);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr);

int main() {
    // code here
    return 0;
}