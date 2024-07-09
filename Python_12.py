# Read space-separated strings from input
strings = input().strip().split()

# Find and print the longest string
print(max(strings, key=len))