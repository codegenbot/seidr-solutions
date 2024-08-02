```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        even_sum = 0
        count = 0
        while i > even_sum and count < 4:
            even_sum += i
            count += 1
        if i == even_sum:
            return True
    return False