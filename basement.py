Here is the solution:

def basement(arr):
    for i in range(len(arr)):
        if sum(arr[:i+1]) < 0:
            return i

print(basement([1])) # 0
print(basement([1,-100])) # 0
print(basement([2,-1,100])) # 0
print(basement([2,-95,100])) # 0
print(basement([2,-30,5])) # 0