```
def basement(arr):
    total = 0
    for i, num in enumerate(arr):
        total += num
        if total < 0:
            return i
    return -1

# Example usage:
print(basement([1, -1]))  # Output: 0
print(basement([1, -100]))  # Output: 0
print(basement([2, -1, 100]))  # Output: 0
print(basement([2, -95, 100]))  # Output: 0
print(basement([2, -30, 5]))  # Output: 0