```cpp
The problem is: Given an array of integers, calculate and return the product of the signs (i.e., whether each number is positive, negative, or zero) and sum of magnitudes.

Problem description:
Write a function called prod_signs that takes as input a vector of integers. The function should iterate over the given numbers and consider their signs separately from their magnitudes. If a number is zero, it can be ignored. Then, return a value based on these two aspects:

1. Product of signs: Calculate the product of the signs (i.e., whether each number is positive, negative, or zero) considering the actual sign (+1 for positive numbers and -1 for negative ones), not their magnitudes.

2. Sum of magnitudes: Calculate the sum of the absolute values of the given integers.

The function should also handle the edge case where the input vector is empty.