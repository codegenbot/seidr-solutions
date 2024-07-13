```
def largest_prime_factor(n):
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            j = i
            while n % j == 0:
                n //= j
            return j
    return n

def main():
    n = int(input("Enter a number: "))
    print(largest_prime_factor(n))

if __name__ == "__main__":
    main()