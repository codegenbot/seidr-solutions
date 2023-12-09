def count_up_to(n):
    prime_list = []
    for i in range(2, n+2):
        if is_prime(i):
            prime_list.append(i)
    return prime_list

def is_prime(n):
    if n > 1:
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
    return False
