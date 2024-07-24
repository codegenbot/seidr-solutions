```cpp
string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end)
        return "NO";

    int length = end - start + 1;

    bool isPrime = true;
    for(int i = 2; i * i <= length; i++) {
        if(length % i == 0) {
            isPrime = false;
            break;
        }
    }

    for(int i = start; i <= end; i++) {
        bool tempIsPrime = true;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                tempIsPrime = false;
                break;
            }
        }
        if(!tempIsPrime)
            isPrime = false;
    }

    return isPrime ? "YES" : "NO";
}