def sum_odd_digits(lst):
    return sum(int(d) for d in ''.join(map(str, lst)) if int(d) % 2 != 0)

def check(solution):
    return solution == 9

print(sum_odd_digits([1,3,5]))