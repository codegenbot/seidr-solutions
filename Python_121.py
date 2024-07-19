```
def sum_odd_digits(lst):
    return sum(int(d) for d in "".join(map(str, lst)) if int(d) % 2 != 0)


def check(lst):
    total_sum = sum_odd_digits(lst)
    return total_sum == 9


print(check([1, 3, 5]))