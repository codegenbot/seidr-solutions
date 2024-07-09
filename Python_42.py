def increment_numbers(l):
    return [num + 1 for num in l]

incr_list = [5, 2, 5, 2, 3, 3, 9, 0, 123]

result = increment_numbers(incr_list)
print(result)

assert result == [6, 3, 6, 3, 4, 4, 10, 1, 124]