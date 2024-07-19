```
def solution(input_list):
    return all([i for i in input_list].count(0) == len(input_list))

input_list = [4, 2, 6]
print(solution(input_list))