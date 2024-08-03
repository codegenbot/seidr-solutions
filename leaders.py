Here is the completed code:

def leaders(input_list):
    result = []
    max_right = input_list[-1]
    for i in range(len(input_list) - 1, -1, -1):
        if input_list[i] >= max_right:
            result.append(input_list[i])
            max_right = input_list[i]
    return result[::-1]

input_list = list(map(int, input().split()))
print(*leaders(input_list))