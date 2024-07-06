Problem: CPP/128

Given an array of integers, determine and return the product of signs and sum of magnitudes.
If all numbers are zero then return -32768.

Task description:
Complete the function prod_signs(vector<int> arr) that accepts a vector of integer values. The function should calculate the product of signs and sum of magnitudes in the input array. 

The product of signs is calculated by considering each number in the array separately. 
- If the number is positive, append 1 to the product of signs.
- If the number is negative, append -1 to the product of signs.
- If the number is zero, skip it.

The sum of magnitudes is simply the sum of absolute values of all numbers in the array.
If all numbers are zero then return -32768.