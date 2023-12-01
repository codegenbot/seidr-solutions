vector<int> tri(int n){
    vector<int> result;
    result.push_back(3); // first element of Tribonacci sequence is always 3

    if(n == 0){ // if n is 0, return the vector with only the first element
        return result;
    }

    result.push_back(1); // second element of Tribonacci sequence is always 1

    if(n == 1){ // if n is 1, return the vector with the first two elements
        return result;
    }

    result.push_back(2); // third element of Tribonacci sequence is always 2

    if(n == 2){ // if n is 2, return the vector with the first three elements
        return result;
    }

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){ // if i is even, calculate tri(i) = 1 + i / 2
            result.push_back(1 + i / 2);
        } else { // if i is odd, calculate tri(i) = tri(i - 1) + tri(i - 2) + tri(i + 1)
            result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
        }
    }

    return result;
}