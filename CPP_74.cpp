int sum(string s){
        int res=0;
        for(auto c:s) res+=tolower(c);
        return res;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        int sum1 = 0, sum2 = 0;
        for(string s: lst1) sum1 += sum(s);
        for(string s: lst2) sum2 += sum(s);
        
        if(sum1 < sum2) return lst1;
        else return (sum1 == sum2) ? lst1 : lst2;
    }