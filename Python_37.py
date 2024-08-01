```
def sort_even(l: list):
    even_nums = [x for x in l if x % 2 == 0]
    odd_nums = [x for x in l if x % 2 != 0]
    
    even_nums.sort()
    odd_nums.sort(reverse=True)
    
    return list(zip(even_nums, odd_nums))