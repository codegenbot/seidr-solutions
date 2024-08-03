Here is the Python solution for the problem:

def basement(lst):
    for i in range(len(lst)):
        total = sum(lst[:i+1])
        if total < 0:
            return i

print(basement([1])) # 0
print(basement([1,-100])) # 0
print(basement([2,-1,100])) # 0
print(basement([2,-95,100])) # 0
print(basement([2,-30,5])) # 0