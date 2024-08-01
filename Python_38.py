import sys

def decode_cyclic(input_str):
    return input_str[-1] + input_str[:-1]

input_str = sys.stdin.readline().strip()
result = decode_cyclic(input_str)
print(result)