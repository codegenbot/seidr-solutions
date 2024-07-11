def double_the_difference(lst, target_diff):
    even_numbers = [i for i in lst if isinstance(i, int) and i % 2 == 0]
    pairs = [(even_numbers[i], even_numbers[j]) for i in range(len(even_numbers)) 
             for j in range(i+1, len(even_numbers)) if abs(even_numbers[i] - even_numbers[j]) == target_diff]
    return sum(pair[0]**2 for pair in pairs)