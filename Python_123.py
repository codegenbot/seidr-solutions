
def get_odd_collatz(n):
    if n == 1:
        return [1]
    else:
        result = []
        while n > 1:
            if n % 2 == 0:
                n //= 2
            else:
                n = 3 * n + 1
            if n % 2 != 0:
                result.append(n)
        return sorted(result)