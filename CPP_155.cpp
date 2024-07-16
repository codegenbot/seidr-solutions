vector<int> even_odd_count(int num){
        vector<int> res(2, 0);
        string numStr = to_string(abs(num));
        for (char c : numStr) {
            if ((c - '0') % 2 == 0) {
                res[0]++;
            } else {
                res[1]++;
            }
        }
        return res;
    }