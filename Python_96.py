def count_up_to(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    result = []
    for i in range(2, n+1): 
        if is_prime(i):
            result.append(str(i))  # Convert to string for the expected output
        else:
            continue
    return sorted(list(map(int, result)))