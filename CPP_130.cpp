vector<int> tri(int n){
    vector<int> tribonacci;
    tribonacci.push_back(3); // Add the first element of the Tribonacci sequence

    if(n == 0){ // If n is 0, return the vector with only the first element
        return tribonacci;
    }

    tribonacci.push_back(1); // Add the second element of the Tribonacci sequence

    if(n == 1){ // If n is 1, return the vector with the first two elements
        return tribonacci;
    }

    tribonacci.push_back(2); // Add the third element of the Tribonacci sequence

    if(n == 2){ // If n is 2, return the vector with the first three elements
        return tribonacci;
    }

    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){ // If i is even, calculate the Tribonacci number using the formula 1 + i / 2
            tribonacci.push_back(1 + i / 2);
        } else { // If i is odd, calculate the Tribonacci number using the formula tri(i - 1) + tri(i - 2) + tri(i + 1)
            tribonacci.push_back(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i + 1]);
        }
    }

    return tribonacci;
}