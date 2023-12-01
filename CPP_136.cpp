vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0);
    int largestNegative = 0;
    int smallestPositive = 0;
    
    for(int num : lst){
        if(num < 0 && num < largestNegative){
            largestNegative = num;
        }
        else if(num > 0 && (num < smallestPositive || smallestPositive == 0)){
            smallestPositive = num;
        }
    }
    
    result[0] = largestNegative;
    result[1] = smallestPositive;
    
    return result;
}

int main() {
    // Test cases
    assert(largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == vector<int>{-3, 1});
    assert(largest_smallest_integers({-1, -2, -3, -4}) == vector<int>{-1, -2});
    assert(largest_smallest_integers({3, 2, 1, 0, -1, -2}) == vector<int>{-2, 1});
    
    return 0;
}