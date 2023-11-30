vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = 0, count_b = 0;
        int temp_a = a, temp_b = b;
        
        while(temp_a != 0){
            count_a += temp_a & 1;
            temp_a >>= 1;
        }
        
        while(temp_b != 0){
            count_b += temp_b & 1;
            temp_b >>= 1;
        }
        
        if(count_a == count_b){
            return a < b;
        }
        
        return count_a < count_b;
    });

    return arr;
}