```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining % 2 == 0 and can_be_written_as_sum_of_four_even_numbers(remaining):
            return True
    return False

def can_be_written_as_sum_of_four_even_numbers(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining // 2 <= i:
            return True
    return False