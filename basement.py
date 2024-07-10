Here is the solution in Python:

def basement(input_list):
    total = 0
    for i, num in enumerate(input_list):
        total += num
        if total < 0:
            return i

print(basement([1])) # 0
print(basement([1,-100])) # 0
print(basement([2,-1,100])) # 0
print(basement([2,-95,100])) # 0
print(basement([2,-30,5])) # 0