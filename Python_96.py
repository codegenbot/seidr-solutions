def count_up_to(n):
    def is_prime(num):
        if num <= 1:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    if n < 2:
        return []
    result = [2]
    for i in range(3, n + 1, 2):
        if is_prime(i):
            result.append(i)
    return result