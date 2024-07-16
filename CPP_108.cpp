int count_nums(vector<int> n){
        int count = 0;
        for(int num : n){
            string str = to_string(abs(num));
            int sum = 0;
            for(char c : str){
                sum += c - '0';
            }
            if(sum > 0){
                count++;
            }
        }
        return count;
    }