def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    return "The sum of odd numbers at even indices is: {}".format(odd_sum)