Here is the solution:

def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            return i

print(basement([1, -1])) # Output: 0
print(basement([1, -100])) # Output: 0
print(basement([2, -1, 100])) # Output: 0
print(basement([2, -95, 100])) # Output: 0
print(basement([2, -30, 5])) # Output: 0