```Python
def double_the_difference(lst1, lst2):
    even_sum = sum(i for i in lst2 if isinstance(i, int) and i % 2 == 0)
    odd_sum = sum(i for i in lst2 if isinstance(i, int) and i % 2 != 0)
    
    return (even_sum + odd_sum) / 2 - even_sum