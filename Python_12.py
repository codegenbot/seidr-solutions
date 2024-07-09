# Read separate lines of strings
strings = [input() for _ in range(3)]

# Find and print the longest string
print(max(strings, key=len))