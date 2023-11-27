vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b){
        int countA = 0, countB = 0;
        for(int i = 0; i < 32; i++) {
            if(a & (1 << i)) countA++;
            if(b & (1 << i)) countB++;
        }
        if (countA == countB) return a < b;
        return countA < countB;
    });
    return arr;
}