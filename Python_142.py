```
def sum_of_squares_perfect_square_roots(lst):
    perfect_squares_sum = 0
    for num in lst:
        sqrt = int(num**0.5)
        if sqrt * sqrt == num:
            perfect_squares_sum += num
    return perfect_squares_sum