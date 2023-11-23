def sort_third(l: list):
    l_prime = l.copy()
    divisible_by_three = [i for i in range(len(l)) if i % 3 == 0]
    divisible_by_three_values = [l[i] for i in divisible_by_three]
    sorted_divisible_by_three_values = sorted(divisible_by_three_values)
    
    for i in divisible_by_three:
        l_prime[i] = sorted_divisible_by_three_values.pop(0)
    
    return l_prime