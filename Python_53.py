import ast

def add(x: int, y: int) -> int:
    return x + y

input_str = input()
input_tuple = ast.literal_eval(input_str)

result = add(*input_tuple)

print(result)