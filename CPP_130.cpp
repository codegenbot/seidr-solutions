vector<int> tri(int n){
    vector<int> result;
    result.push_back(3);  // First element of Tribonacci sequence is always 3

    if(n > 0){
        result.push_back(1 + n/2);  // Second element of Tribonacci sequence

        for(int i = 2; i <= n; i++){
            if(i % 2 == 0){
                result.push_back(1 + i/2);  // If i is even, calculate using the formula 1 + i/2
            }
            else{
                result.push_back(result[i-1] + result[i-2] + result[i+1]);  // If i is odd, calculate using the formula tri(i-1) + tri(i-2) + tri(i+1)
            }
        }
    }

    return result;
}