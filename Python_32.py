def count_zeros(num):
    return bin(num).count('0')

def sort_integers(input_list):
    return sorted(input_list, key=count_zeros)

def check(func):
    test_list = [5, 2, 15, 10, 7]
    result = func(test_list)
    return result

check(sort_integers)