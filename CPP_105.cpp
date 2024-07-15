#include <algorithm>
#include <map>

bool issame(int a, int b){
    return a == b;
}

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sorted_arr;
    map<int, string> num_to_str = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }
    
    sort(sorted_arr.begin(), sorted_arr.end(), issame);
    reverse(sorted_arr.begin(), sorted_arr.end());
    
    for (int num : sorted_arr) {
        result.push_back(num_to_str[num]);
    }
    
    return result;
}

int main() {
    vector<int> input_arr = {3, 1, 7, 9, 4, 2, 6, 5};
    
    vector<string> output = by_length(input_arr);
    
    for (string str : output) {
        cout << str << " ";
    }
    
    return 0;
}