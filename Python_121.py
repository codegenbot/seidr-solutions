"""
def solution(lst):
    odd_sum = sum(i for i in lst if i % 2 != 0)
    even_sum = sum(i for i in lst if i % 2 == 0)
    return "Odd: {} Even: {}".format(odd_sum, even_sum)