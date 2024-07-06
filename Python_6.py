def solution(input_str):
    result = []
    nested_levels = 0
    for char in input_str:
        if char == '(':
            nested_levels += 1
            result.append(nested_levels)
        elif char == ')':
            nested_levels -= 1
            result.append(nested_levels)
    print([int(x) for x in result])

input_str = input()
solution(input_str)