#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

vector<string> by_length(vector<int> arr);

bool issame(vector<string> a, vector<string> b);

vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> sortedArr;
    map<int, string> numMap;
    
    numMap[1] = "One";
    numMap[2] = "Two";
    numMap[3] = "Three";
    numMap[4] = "Four";
    numMap[5] = "Five";
    numMap[6] = "Six";
    numMap[7] = "Seven";
    numMap[8] = "Eight";
    numMap[9] = "Nine";
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9){
            sortedArr.push_back(arr[i]);
        }
    }
    
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    
    for(int i = 0; i < sortedArr.size(); i++){
        result.push_back(numMap[sortedArr[i]]);
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<string> result = by_length(arr);

    for(string num : result){
        cout << num << " ";
    }

    return 0;
}