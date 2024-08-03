def count_up_to(n):
    def is_prime(k):
        if k < 2:
            return False
        for i in range(2, int(k**0.5) + 1):
            if k % i == 0:
                return False
        return True

    result = []
    for i in range(2, n+1): 
        if is_prime(i):
            result.append(str(i)) 
    return ' -> '.join(result)