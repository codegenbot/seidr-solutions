```
def is_equal_to_sum_even(n):
    for i in range(2, n//2 + 1, 2):
        even_numbers = [i]
        total = i
        for j in range(i+2, n//2 + 1, 2):
            if total + j > n:
                break
            even_numbers.append(j)
            total += j
        if total == n:
            return True
    return False