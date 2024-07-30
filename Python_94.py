def skjkasdkd(lst):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n ** 0.5) + 1):
            if n % i == 0:
                return False
        return True

    def sum_of_digits(num):
        return sum(int(d) for d in str(num))

    max_prime = 0
    for num in lst:
        if is_prime(num) and num > max_prime:
            max_prime = num

    return sum_of_digits(max_prime) if max_prime != 0 else 0