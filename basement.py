Here is the Python solution:

def basement_index(v):
    s = sum(1 for i in v if i < 0)
    for i, x in enumerate(v):
        s += x
        if s < 0:
            return i

print(basement_index([1])) 
print(basement_index([1,-100]))
print(basement_index([2,-1,100]))
print(basement_index([2,-95,100]))
print(basement_index([2,-30,5]))