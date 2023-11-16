import math

def is_prime(n):
    if n <= 1:
        return False
    elif n == 2:
        return True
    elif n > 2 and n % 2 == 0:
        return False
    else:
        for i in range(3, int(math.sqrt(n)) + 1, 2):
            if n % i == 0:
                return False
        return True

def x_or_y(n, x, y):
    if is_prime(n):
        return x
    else:
        return y


if __name__ == '__main__':
    check(is_prime)
    check(x_or_y)
