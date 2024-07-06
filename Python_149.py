def sorted_list_sum(lst):
    even_sums = [
        sum(int(digit) for digit in str(num)) for num in lst if len(str(num)) % 2 == 0
    ]
    return sum(sorted(even_sums))