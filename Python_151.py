def check(lst, result):
    if isinstance(result, int) and (result == 0 or abs(result - 2 * sum(i for i in lst)) <= 1e-9):
        print("Yes")
    else:
        print("No")