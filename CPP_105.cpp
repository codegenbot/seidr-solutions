#include <vector>
using namespace std;
vector<pair<int, string>> by_length(vector<int> arr){
    vector<pair<int, string>> temp;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 1 && arr[i] <= 9)
            temp.push_back({arr[i], to_string(arr[i]) == "1" ? "One": 
                to_string(arr[i]) == "2" ? "Two":
                to_string(arr[i]) == "3" ? "Three":
                to_string(arr[i]) == "4" ? "Four":
                to_string(arr[i]) == "5" ? "Five":
                to_string(arr[i]) == "6" ? "Six":
                to_string(arr[i]) == "7" ? "Seven":
                to_string(arr[i]) == "8" ? "Eight":
                "Nine"});
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    return temp;
}