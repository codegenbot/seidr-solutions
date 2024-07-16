vector<int> even_odd_count(int num){
        vector<int> result = {0, 0};
        while(num != 0){
            if(abs(num % 10) % 2 == 0)
                result[0]++;
            else
                result[1]++;
            num /= 10;
        }
        return result;
    }