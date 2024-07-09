#include<vector>
#include<algorithm>

int can_arrange(vector<int> arr){
    for(int i = 1; i < arr.size(); i++){
        if(std::find(arr.begin(), arr.end(), arr[i]) != arr.end() && std::find(arr.begin(), arr.end(), arr[i-1]) == arr.end())
            return i - 1;
    }
    return -1;
}

int main(){
   assert (can_arrange({})==-1);
   return 0;
}