a, b = map(int, input("Enter the coefficients 'a' and 'b' of the quadratic equation separated by a space: ").split())
result = find_zero([a, b])
print(f"The value of x where the equation is equal to zero is: {result}")