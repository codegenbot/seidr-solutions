Here is the modified code:

"""
Problem description:
Your task is to complete the following code for adding specific elements from an array.
You are given a list of integers, arr, and integer k. 
The function should return the sum of all numbers in arr up to index k that have less than 3 digits when converted to string.

Function signature:
def add_elements(arr, k):
    # Your code here
"""
def add_elements(arr, k):
    return sum(i for i in arr[:k+1] if len(str(abs(i))) <= 2)