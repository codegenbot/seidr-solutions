import sys
try:
    input_numbers = list(map(int, sys.stdin.readlines()))
except EOFError:
    pass

def rolling_max(input_numbers):
    max_nums = [max(input_numbers[:i+1]) for i in range(len(input_numbers))]
    return max_nums

result = rolling_max(input_numbers)
print(result)