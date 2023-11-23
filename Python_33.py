def sort_third(l: list):
    l_prime = l.copy()
    divisible_by_three = [l[i] for i in range(len(l)) if i % 3 == 0]
    divisible_by_three.sort()
    for i in range(len(l)):
        if i % 3 == 0:
            l_prime[i] = divisible_by_three.pop(0)
    return l_prime