def skjkasdkd(lst):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    def sum_of_digits(n):
        return sum(int(d) for d in str(n))

    prime_numbers = [num for num in lst if is_prime(num)]
    largest_prime = max(prime_numbers)
    return sum_of_digits(largest_prime)