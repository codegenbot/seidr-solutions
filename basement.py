def get_negative_index(numbers):
    current_sum = 0
    for i, num in enumerate(numbers):
        current_sum += num
        if current_sum < 0:
            return i
    return -1
```
The above code is a function that takes in a vector of integers and returns the first index where the sum of all integers from the start of the vector to that index (inclusive) is negative. If no such index exists, the function returns -1.

Here's how the code works:

1. Initialize `current_sum` to 0.
2. Loop through each number in the input vector using a for-loop.
3. For each number, add it to `current_sum`.
4. If `current_sum` is negative, return the current index (i).
5. If we reach the end of the loop and no negative index has been found, return -1.

Note that this code assumes that the input vector contains only integers. If the input vector contains other types of numbers or non-numeric values, the code will need to be modified accordingly.