int sumLength(vector<string> vec) {
        int sum = 0;
        for (string str : vec) {
            sum += str.length();
        }
        return sum;
    }
    
    vector<string> total_match(vector<string> lst1, vector<string> lst2){
        if (sumLength(lst1) < sumLength(lst2)){
            return lst1;
        } else {
            return (sumLength(lst1) == sumLength(lst2)) ? lst1 : lst2;
        }
    }