```
def x_or_y(n, x, y):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    if n <= (x + y) // 2:
        return x
    else:
        return y