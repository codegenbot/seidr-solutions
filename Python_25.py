def main():
    n = int(input("Enter an integer: "))
    factors = factorize(n)
    print(f"The factors of {n} are: {', '.join(map(str, factors))}")

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while n > 1:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i**count)
    return factors