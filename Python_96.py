def count_up_to(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    result = []
    num = 2
    while num <= n:
        if is_prime(num):
            result.append(str(num))
        num += 1
    return ', '.join(result)