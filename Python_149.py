def sorted_list_sum(lst):
    alpha_chars = [i for i in lst if isinstance(i, str) and i.isalpha()]
    digits = [int(char) for char in "".join(alpha_chars) if char.isdigit()]
    return [str(digit) for digit in sorted(digits)]