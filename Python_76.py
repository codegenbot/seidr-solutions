def is_simple_power(x, n):
    return x > 0 and n > 0 and x == n**int(x/n)

# Test the function
assert is_simple_power(1, 12) == True