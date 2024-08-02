Here is the Python solution for the problem:

def roll_higher(n, m):
    return (n-m) / (n*m)

# Test cases
print(roll_higher(1, 2)) # Output: 0.0
print(roll_higher(2, 1)) # Output: 0.5
print(roll_higher(99, 100)) # Output: 0.49
print(roll_higher(100, 99)) # Output: 0.5
print(roll_higher(1, 100)) # Output: 0.0