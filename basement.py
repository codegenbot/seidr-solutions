Here is the Python solution for the problem:

def basement(arr):
    total = 0
    for i, num in enumerate(arr):
        total += num
        if total < 0:
            return i

print(basement([1, -1])) 
print(basement([1, -100]))
print(basement([2, -1, 100]))
print(basement([2, -95, 100]))
print(basement([2, -30, 5]))