Here is the completed code:

def basement(arr):
    for i in range(len(arr)):
        total = sum(arr[:i+1])
        if total < 0:
            return i

print(basement([1, -1])) 
print(basement([1, -100])) 
print(basement([2, -1, 100]))
print(basement([2, -95, 100]))
print(basement([2, -30, 5]))