```
def sum_of_odd_numbers(lst):
    solution = 0
    for i in lst:
        if i % 2 != 0:
            solution += i
    return solution

print(sum_of_odd_numbers([1, 2, 3, 4, 5]))