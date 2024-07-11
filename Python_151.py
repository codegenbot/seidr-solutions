```
def double_the_difference(lst, target_diff):
    even_numbers = [i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0]
    closest_even_number = min(even_numbers, key=lambda x:abs(x-target_diff))
    return sum((i**2 for i in even_numbers if abs(i-closest_even_number) <= target_diff))