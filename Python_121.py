```
def odd_sum_even_skips(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

lst = input("Enter a list of numbers separated by space: ")
lst = [int(x) for x in lst.split()]

solution = odd_sum_even_skips(lst)

check(solution)