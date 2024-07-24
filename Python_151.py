def double_the_difference(lst):
    odd_numbers = [i**2 for i in lst if isinstance(i, int) and i % 2 != 0]
    avg = sum(i for i in lst if isinstance(i, int)) / len(lst)
    return abs(sum(odd_numbers) - 2 * avg)