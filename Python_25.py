def check(factorized_num):
    for i in range(2, factorized_num + 1):
        if all(x not in factorize(i) for x in factorize(factorized_num) if x != i):
            return str(i)