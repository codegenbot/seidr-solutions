Here is the Python solution for the given problem:

def basement(v):
    for i in range(len(v)):
        if sum(v[:i+1]) < 0:
            return i

print(basement([1,-1]))  # expected output: 0
print(basement([1,-100]))  # expected output: 0
print(basement([2,-1,100]))  # expected output: 0
print(basement([2,-95,100]))  # expected output: 0
print(basement([2,-30,5]))  # expected output: 0