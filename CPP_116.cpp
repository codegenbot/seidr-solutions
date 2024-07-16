sort(arr.begin(), arr.end(), [](int a, int b){
    int numOnesA = __builtin_popcount(a);
    int numOnesB = __builtin_popcount(b);
    if (numOnesA == numOnesB) {
        return a < b;
    } else {
        return numOnesA < numOnesB;
    }
});
return arr;