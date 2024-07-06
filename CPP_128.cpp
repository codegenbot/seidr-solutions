```cpp
The problem description: 
Task: Calculate the product of signs and sum of magnitudes of numbers in an array.
Function signature: int prod_signs(vector<int> arr)
Input: A vector of integers representing an array of numbers.
Output: The product of the signs (1 or -1) times the sum of the absolute values of all non-zero numbers in the input array. If the array is empty, return -32768.

```cpp
int prod_signs(vector<int> arr){
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for(int num : arr){
        if(num == 0) continue;
        sign_product *= (num > 0 ? 1 : -1);
        sum_of_magnitudes += abs(num);
    }

    return (arr.empty()) ? -32768 : sign_product * sum_of_magnitudes;
}
```