```
def basement(arr):
    for i in range(len(arr)):
        total = sum(arr[:i+1])
        if total < 0:
            return i
    return -1

# test cases
print(basement([1,-1])) # 0
print(basement([1,-100])) # 0
print(basement([2,-1,100])) # 0
print(basement([2,-95,100])) # 0
print(basement([2,-30,5])) # 0