def count_zeros(num):
    return bin(num).count('0')

def sort_integers(input_list):
    return sorted(input_list, key=count_zeros)

check(sort_integers)