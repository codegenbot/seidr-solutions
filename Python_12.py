# Read space-separated strings from input
strings = input().split()

# Find and print the longest string
print(max(strings, key=len))