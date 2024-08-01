Here is the solution:

int smallest_change(vector<int> arr){
    int n = arr.size();
    string str = "";
    for(int i : arr) {
        str += to_string(i);
    }
    
    int count = 0;
    int left = 0, right = n - 1;
    while(left < right) {
        if(str[left] != str[right]) {
            bool found = false;
            for(int i = 0; i < n; i++) {
                if(str[i] == str[right]) {
                    arr[i] = arr[left];
                    count++;
                    found = true;
                    break;
                }
            }
            if(!found) {
                arr[left] = arr[right];
                count++;
            }
            left++;
            right--;
        } else {
            left++;
            right--;
        }
    }
    
    return count;
}