vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](const int& a, const int& b) {
        int countA = 0, countB = 0;
        int tempA = a, tempB = b;
        
        while (tempA != 0) {
            if (tempA % 2 == 1) countA++;
            tempA /= 2;
        }
        
        while (tempB != 0) {
            if (tempB % 2 == 1) countB++;
            tempB /= 2;
        }
        
        if (countA == countB) return a < b;
        return countA < countB;
    });
    
    return arr;
}