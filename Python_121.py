def find_even_numbers(lst):
    return sum(int(num) for num in lst[1::2] if int(num) > 1 and int(num) % 2 != 0)