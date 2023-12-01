def sort_third(l: list):
    l_prime = l.copy()
    divisible_by_three = [i for i in range(len(l_prime)) if i % 3 == 0]
    sorted_values = sorted([l_prime[i] for i in divisible_by_three])
    for i in divisible_by_three:
        l_prime[i] = sorted_values.pop(0)
    return l_prime