Here is the solution:

def find_factorization(n):
    i = 2
    factors = []
    while i <= math.sqrt(n):
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            for _ in range(count):
                factors.append(i)
            i += 1
    if n > 1:
        factors.append(int(n))
    return factors

n = int(input("Enter a number: "))
print(find_factorization(n))