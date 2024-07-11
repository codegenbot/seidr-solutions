vector<int> count = {0, 0};
        for(int i=1; i<=n; i++){
            string num = to_string(i);
            string rev_num = num;
            reverse(rev_num.begin(), rev_num.end());
            if(num == rev_num){
                if(i % 2 == 0){
                    count[0]++;
                } else {
                    count[1]++;
                }
            }
        }
        return count;
    }