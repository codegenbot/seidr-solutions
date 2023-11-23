input_string = input()
nums = input_string.split()
result = sum([int(num)//3 - 2 for num in nums])
print(result)