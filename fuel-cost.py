def solve(input_list):
    result = sum((i // 3 - 2) for i in input_list)
    return result