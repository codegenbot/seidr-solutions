[PYTHON]
def even_odd_count(num):
    count_even = 0
    count_odd = 0
    while num > 0:
        if num % 2 == 0:
            count_even += 1
        else:
            count_odd += 1
        num //= 10
    return [count_even, count_odd]
[/PYTHON]
[TESTS]
# Test case 1:
assert even_odd_count(123) == [3, 0]
# Test case 2:
assert even_odd_count(1234) == [4, 0]
# Test case 3:
assert even_odd_count(12345) == [5, 0]
# Test case 4:
assert even_odd_count(123456) == [6, 0]
# Test case 5:
assert even_odd_count(1234567) == [7, 0]
# Test case 6:
assert even_odd_count(12345678) == [8, 0]
# Test case 7:
assert even_odd_count(123456789) == [9, 0]
# Test case 8:
assert even_odd_count(1234567890) == [10, 0]
[/TESTS]
