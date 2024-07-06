```
def starts_one_ends(n):
    total_count = 0
    for i in range(10**(n-1), 10**n):
        if str(i)[0] == '1' or str(i)[-1] == '1':
            total_count += 1
    return total_count