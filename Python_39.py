def prime_fib(n: int):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def fibonacci(n):
        fib_seq = [0, 1]
        count = 2
        while count < n:
            next_num = fib_seq[-1] + fib_seq[-2]
            if is_prime(next_num):
                fib_seq.append(next_num)
                count += 1
            else:
                fib_seq.append(next_num)
        return fib_seq

    fib_seq = fibonacci(n)
    return sum(fib_seq)