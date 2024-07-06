```
def count_up_to(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    result = [str(i) if i == 2 or is_prime(i) else '' for i in range(2, n+1)]
    if result[-1] == '':
        result.pop()
    return result