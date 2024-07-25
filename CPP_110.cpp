string exchange(vector<int> lst1,vector<int> lst2){
    bool hasOdd = false;
    for(int num : lst1){
        if(num % 2 != 0){
            hasOdd = true;
            break;
        }
    }
    for(int num : lst2){
        if(hasOdd && (num % 2 == 0 || contains(lst1, num))){
            return "NO";
        }
    }
    return hasOdd ? "NO" : "YES";

}

bool contains(vector<int> vec, int target) {
    for(int num : vec) {
        if(num == target)
            return true;
    }
    return false;
}