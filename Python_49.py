

def modp(n: int, p: int) -> int:
    """
    Return 2^n modulo p (be aware of numerics).
    :param n:
    :param p:
    :return:
    """
    if n == 0:
        return 1
    elif n == 1:
        return 2
    else:
        return (2 * modp(n - 1, p)) % p


if __name__ == '__main__':
    print(modp(3, 5))
    print(modp(1101, 101))
    print(modp(0, 101))
    print(modp(3, 11))
    print(modp(100, 101))
