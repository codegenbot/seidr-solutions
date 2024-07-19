def sum_odd_digits(lst):
    return sum(int(d) for d in "".join(map(str, lst)) if int(d) % 2 != 0)

def check(solution):
    return solution == 9

expected_result = 9
print(check(expected_result))