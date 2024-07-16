def solution(lst):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True

    result = []
    for i in range(len(lst)):
        half_index = len(lst) // 2
        if i < half_index:
            result.append(sum(1 for num in lst[: i + 1] if is_prime(num)))
        else:
            result.append(sum(1 for num in lst[i:] if is_prime(num)))

    return sum(result)