def factorize(n):
    if n <= 1:
        return "Factors are not defined for numbers less than 2."
    
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

try:
    num = int(input("Enter a number to factorize: "))
    print(factorize(num))
except ValueError:
    print("Invalid input. Please enter a valid integer.")