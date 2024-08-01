Here is the solution in Python:

def basement(input_list):
    total_sum = 0
    for i, num in enumerate(input_list):
        total_sum += num
        if total_sum < 0:
            return i

print(basement([1, -1])) # Should print: 0
print(basement([1, -100])) # Should print: 0
print(basement([2, -1, 100])) # Should print: 0
print(basement([2, -95, 100])) # Should print: 0
print(basement([2, -30, 5])) # Should print: 0