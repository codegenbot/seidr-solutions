#include <vector>
#include <string>

vector<string> by_length(vector<int> arr);

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

int main() {
    // test cases
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {5, 4, 3, 2, 1};
    vector<int> arr3 = {1, 2, 3, 4, 6};

    vector<string> result1 = by_length(arr1);
    vector<string> result2 = by_length(arr2);
    vector<string> result3 = by_length(arr3);

    vector<string> expected1 = {"Five", "Four", "Three", "Two", "One"};
    vector<string> expected2 = {"One", "Two", "Three", "Four", "Five"};
    vector<string> expected3 = {"Six", "Four", "Three", "Two", "One"};

    if(issame(result1, expected1)){
        cout << "Test case 1 passed" << endl;
    } else {
        cout << "Test case 1 failed" << endl;
    }

    if(issame(result2, expected2)){
        cout << "Test case 2 passed" << endl;
    } else {
        cout << "Test case 2 failed" << endl;
    }

    if(issame(result3, expected3)){
        cout << "Test case 3 passed" << endl;
    } else {
        cout << "Test case 3 failed" << endl;
    }

    return 0;
}