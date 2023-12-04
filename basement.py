```
def get_negative_sum_index(arr):
    # Initialize variables
    sum = 0
    index = -1

    # Loop through the array
    for i in range(len(arr)):
        # Add the current element to the sum
        sum += arr[i]

        # Check if the sum is negative
        if sum < 0:
            # If it is, set the index to the current element
            index = i
            break

    return index
```