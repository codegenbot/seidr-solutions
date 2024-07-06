def double_the_difference(odd_sum_list):
    return sum(i**2 for i in odd_sum_list if isinstance(i, int) and i % 2 != 0)

def check():
    odd_sum_list = [1, 4, 3, 2]
    print(double_the_difference(odd_sum_list))