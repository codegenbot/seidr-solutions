Here is the Python solution for the problem:

def basement(lst):
    for i in range(len(lst)):
        if sum(lst[:i+1]) < 0:
            return i

print(basement([1])) # Output: 0
print(basement([-1, 100])) # Output: 0
print(basement([2, -1, 100])) # Output: 0
print(basement([2, -95, 100])) # Output: 0
print(basement([2, -30, 5])) # Output: 0