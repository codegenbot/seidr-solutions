# Read input as a string and split by spaces
strings = input().split()

# Define the 'longest' function
def longest(strings):
    return max(strings, key=len)

# Call the longest function with the input list of strings
result = longest(strings)
print(result)