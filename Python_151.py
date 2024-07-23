```
print(double_the_difference([1,2,3]))

def double_the_difference(lst):
    odd_numbers = [i for i in lst if isinstance(i, int) and i % 2 != 0]
    even_sum = sum(i for i in lst if isinstance(i, int) and i % 2 == 0)
    return (sum(odd_numbers)) * 2 - even_sum