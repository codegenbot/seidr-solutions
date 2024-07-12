def double_the_difference(lst):
    even_sum = sum(i for i in lst if i % 2 == 0)
    odd_sum = sum(i for i in lst if i % 2 != 0)
    difference = abs(even_sum - (10**6 - odd_sum)) if even_sum > (10**6 - odd_sum) else abs((10**6 - odd_sum) - even_sum)
    return difference * 2

print(double_the_difference([1, 2, 3]))