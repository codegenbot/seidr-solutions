def string_sequence(n: int) -> str:
    return ' '.join(map(str, range(n+1)))


# Test the function
print(string_sequence(0))  # Output: '0'
print(string_sequence(5))  # Output: '0 1 2 3 4 5'