Here is the solution:

def basement(v):
    for i in range(len(v)):
        total = sum(v[:i+1])
        if total < 0:
            return i

# test cases
print(basement([1]))  # output: 0
print(basement([1,-100]))  # output: 0
print(basement([2,-1,100]))  # output: 0
print(basement([2,-95,100]))  # output: 0
print(basement([2,-30,5]))  # output: 0