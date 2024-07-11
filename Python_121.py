def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

input_list = [1, 3, 5, 7, 9]
print(solution(input_list))