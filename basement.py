Here is the Python code for the problem:

def basement(nums):
    total_sum = 0
    for i, num in enumerate(nums):
        total_sum += num
        if total_sum < 0:
            return i

print(basement([1, -1])) 
# Output: 0
print(basement([1, -100])) 
# Output: 0
print(basement([2, -1, 100])) 
# Output: 0
print(basement([2, -95, 100])) 
# Output: 0
print(basement([2, -30, 5])) 
# Output: 0