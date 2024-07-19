def solution(input_list):
    return len([i for i in input_list if i % 2 == 0])

input_list = [3, 13, 2, 9]
print(solution(input_list))