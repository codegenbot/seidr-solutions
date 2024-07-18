def f(n):
    if n == 1:
        return [1]
    return [
        1 if i == 1 else i * f(i - 1)[0] if i % 2 == 0 else sum(range(1, i + 1))
        for i in range(1, n + 1)
    ]

# Test the function
print(f(3))  # Output: [1, 2, 6]