```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

input_list = list(map(int, input().split()))
print(solution(input_list))