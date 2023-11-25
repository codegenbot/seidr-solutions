import math

input_str = input()
nums = list(map(int, input_str.split()))

result = sum([math.floor(num/3) - 2 for num in nums])
print(result)