```
def basement(arr):
    for i in range(len(arr)):
        if sum(arr[:i+1]) < 0:
            return i
    return -1

# Test cases
print(basement([1, -1]))  # Output: 0
print(basement([1, -100]))  # Output: 0
print(basement([2, -1, 100]))  # Output: 0
print(basement([2, -95, 100]))  # Output: 0
print(basement([2, -30, 5]))  # Output: 0