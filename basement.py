def basement(vector):
    for i in range(len(vector)):
        sum_val = sum(vector[:i+1])
        if sum_val < 0:
            return i

print(basement([1, -1])) # Expected output: 0
print(basement([1, -100])) # Expected output: 0
print(basement([2, -1, 100])) # Expected output: 0
print(basement([2, -95, 100])) # Expected output: 0
print(basement([2, -30, 5])) # Expected output: 0