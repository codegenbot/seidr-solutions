```cpp
#include<vector>

int main() {
    std::vector<int> arr = {0,1};
    int result = smallest_change(arr);
    std::assert(result == 1);
    return 0;
}

int smallest_change(std::vector<int>& arr){
    int n = arr.size();
    string str = "";
    for(int i=0; i<n; i++){
        str += to_string(arr[i]);
    }
    
    int left = 0, right = n-1;
    int count = 0;
    while(left < right){
        if(str[left] != str[right]){
            int min_val = (str[left] - '0') < (str[right] - '0') ? (str[left] - '0') : (str[right] - '0');
            int max_val = (str[left] - '0') > (str[right] - '0') ? (str[left] - '0') : (str[right] - '0');
            
            for(int i=0; i<n; i++){
                if(arr[i] < min_val || arr[i] > max_val){
                    count++;
                    arr[i] = min_val;
                    break;
                }
            }
        }
        left++; right--;
    }
    return count;
}