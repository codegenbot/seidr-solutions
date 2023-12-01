vector<int> tri(int n){
    vector<int> result;
    result.push_back(3); // first element of Tribonacci sequence is always 3

    if(n == 0){
        return result; // if n is 0, return the vector with only the first element
    }

    result.push_back(1); // second element of Tribonacci sequence is always 1

    if(n == 1){
        return result; // if n is 1, return the vector with the first two elements
    }

    result.push_back(2); // third element of Tribonacci sequence is always 2

    if(n == 2){
        return result; // if n is 2, return the vector with the first three elements
    }

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            result.push_back(1 + i / 2); // if i is even, add 1 + i / 2 to the vector
        } else {
            result.push_back(result[i-1] + result[i-2] + result[i+1]); // if i is odd, add tri(i-1) + tri(i-2) + tri(i+1) to the vector
        }
    }

    return result; // return the vector of Tribonacci sequence
}