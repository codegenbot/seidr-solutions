Here is the solution:

def solve():
    num = int(input("Enter a number: "))
    factors = []
    i = 2
    while i * i <= num:
        if num % i:
            i += 1
        else:
            num //= i
            count = 0
            while num % i == 0:
                num //= i
                count += 1
            factors.extend([i] * count)
    if num > 1:
        factors.append(num)
    print(f"The factorization of {num} is: {factors}")