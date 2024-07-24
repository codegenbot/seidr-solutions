def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    while n > 1:
        if n % 2 == 0:
            n //= 2
        elif n % 3 == 0:
            n //= 3
        else:
            for i in range(5, int(n**0.5) + 1, 6):
                if n % i == 0 or n % (i+2) == 0:
                    n = n // i
                    break
            else:
                for i in range(7, int(n**0.5) + 1, 8):
                    if n % i == 0 or n % (i+4) == 0:
                        n //= i
                        break
        if n > max_num:
            max_num = n
    return n

def search(lst):
    freq = {}
    for num in lst:
        if num > 0 and is_prime(num):
            freq[num] = freq.get(num, 0) + 1
    max_num = -1
    for k, v in freq.items():
        if k >= v and k > max_num:
            max_num = k
    return max_num if max_num != -1 else 0