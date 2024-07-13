def skjkasdkd(num):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    max_prime = max([i for i in range(num+1) if is_prime(i)])
    return sum(int(digit) for digit in str(max_prime))