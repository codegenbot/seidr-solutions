    def prime_fib(n: int):
        a, b = 0, 1
        count = 0
        while True:
            if b % 2 == 0 and b > 2:
                b += 1
                continue
            for i in range(2, int(b ** 0.5) + 1):
                if b % i == 0:
                    b += 1
                    break
            else:
                count += 1
                if count == n:
                    return b
                a, b = b, a + b