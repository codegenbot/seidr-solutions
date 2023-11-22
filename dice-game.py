import sys

# Read input values
n = int(sys.stdin.readline().strip())
m = int(sys.stdin.readline().strip())

# Calculate the probability
probability = (n - 1) / (n * m)

# Print the result
print(probability)