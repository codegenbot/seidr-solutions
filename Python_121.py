```
input_list = [4, 2, 6]
def solution(input_list):
    return all(i % 2 == 0 for i in input_list)
print(solution(input_list))