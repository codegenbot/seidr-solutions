def check(lst):
    num_str = ''.join(map(str, lst))
    return sum(int(d) for d in num_str if int(d) % 2 != 0) == 9

print(check([1, 3, 5]))