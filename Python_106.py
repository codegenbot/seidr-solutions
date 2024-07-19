def f(n):
    return [i if i % 2 != 0 else math.factorial(i) for i in range(1, n+1)]
    
# Test the function
print(f(5))