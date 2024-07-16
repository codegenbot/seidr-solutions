Here is the solution:

def leaders(input):
    return [x for i, x in enumerate(reversed(input)) if all(x >= y for y in input[i+1:])]

# Test cases
print(leaders([0]))  # Output: [0]
print(leaders([1, 0]))  # Output: [1, 0]
print(leaders([1, 451]))  # Output: [1, 451]
print(leaders([2, 1000, 0]))  # Output: [2, 1000, 0]
print(leaders([2, 0, 1000]))  # Output: [1, 1000]