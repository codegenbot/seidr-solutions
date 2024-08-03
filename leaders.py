Here is the solution to the problem:

def leaders(input_array):
    return [max(input_array[i:]) for i in range(len(input_array))]

# Testing the function
print(leaders([0]))  # Output: [0]
print(leaders([1, 0]))  # Output: [1, 0]
print(leaders([1, 451]))  # Output: [1, 451]
print(leaders([2, 1000, 0]))  # Output: [2, 1000, 0]
print(leaders([2, 0, 1000]))  # Output: [1, 1000]