def add(x: int, y: int):
    return x + y

input_nums = input().split()
num1 = int(input_nums[0])
num2 = int(input_nums[1])

result = add(num1, num2)

print(result)