Here is the solution:

def basement(input_vector):
    total_sum = 0
    for i, num in enumerate(input_vector):
        total_sum += num
        if total_sum < 0:
            return i

print(basement([1, -1])) # expected output: 0
print(basement([1, -100])) # expected output: 0
print(basement([2, -1, 100])) # expected output: 0
print(basement([2, -95, 100])) # expected output: 0
print(basement([2, -30, 5])) # expected output: 0