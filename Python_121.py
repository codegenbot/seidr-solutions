```
def solution(input_list):
    return sum(i % 2 == 0 for i in input_list)


input_list = [4, 2, 6]
print(solution(input_list))