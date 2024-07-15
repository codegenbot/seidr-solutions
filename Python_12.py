def longest(strings: List[str]) -> Optional[str]:
    if not strings or not all(isinstance(s, str) for s in strings):
        return None
    return max(strings, key=lambda x: (len(x), x))

# Fix input reading and function call
strings = input().split()  # Read space-separated strings input
result = longest(strings)  # Call the longest function
print(result)  # Print the result