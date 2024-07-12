def is_multiply_prime(a):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    factors = []
    for i in range(2, int(a**0.5) + 1):
        if a % i == 0:
            while a % i == 0:
                factors.append(i)
                a //= i
            break
    prime_factors = [f for f in factors if is_prime(f)]
    return len(prime_factors) >= 3

if __name__ == "__main__":
    num = int(input("Enter a number: "))
    print(is_multiply_prime(num))