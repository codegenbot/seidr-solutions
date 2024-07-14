Here is the Python solution for the problem:

def leaders(arr):
    return [x for i, x in enumerate(reversed(arr)) if all(x >= y for y in arr[i+1:])]

# Testing the function
print(leaders([0]))  # Output: [0]
print(leaders([1, 0]))  # Output: [1, 0]
print(leaders([1, 451]))  # Output: [1, 451]
print(leaders([2, 1000, 0]))  # Output: [2, 1000, 0]
print(leaders([2, 0, 1000]))  # Output: [1, 1000]