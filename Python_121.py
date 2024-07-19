def sum_odd_digits(lst):
    return sum(int(d) for d in "".join(map(str, lst)) if int(d) % 2 != 0)

def check(lst):
    return sum_odd_digits(lst) == 9

expected_result = [1,3,5]
print(check(expected_result))