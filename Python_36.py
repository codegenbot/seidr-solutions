def fizz_buzz(n, n_max):
    count = 0
    for i in range(1, n+1):
        if i % 3 == 0 or '7' in str(i) or i > n_max:
            count += 1
    return count