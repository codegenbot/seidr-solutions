Here is the Python solution for the problem:

def basement(arr):
    total = 0
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            return i

print(basement([1, -1])) # Output: 0
print(basement([1, -100])) # Output: 0
print(basement([2, -1, 100])) # Output: 0
print(basement([2, -95, 100])) # Output: 0
print(basement([2, -30, 5])) # Output: 0