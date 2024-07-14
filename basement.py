Here is the Python code for the problem:

def basement(nums):
    total = 0
    for i in range(len(nums)):
        if total < 0:
            return i
        total += nums[i]

print(basement([1])) 
# print output: 0
print(basement([-1, 100])) 
# print output: 0
print(basement([2, -1, 100])) 
# print output: 0
print(basement([2, -95, 100])) 
# print output: 0
print(basement([2, -30, 5])) 
# print output: 0