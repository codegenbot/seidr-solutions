```
#include <iostream>
#include <vector>
#include <string>

int smallest_change(vector<int> arr){
    int n = arr.size();
    string s = "";
    for(int i=0; i<n; i++){
        s += to_string(arr[i]);
    }
    int left = 0, right = s.length() - 1;
    int count = 0;
    while(left < right){
        if(s[left] != s[right]){
            count++;
            break;
        }
        left++;
        right--;
    }
    for(int i=left; i<right; i++){
        if(s[i] != s[s.length()-i-1]){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1, 2, 3};
    int output = smallest_change(arr);
    std::cout << "Smallest change: " << output << endl;
    return 0;
}