def double_the_difference(lst):
    return sum(i ** 2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)

user_input = input().split()

numbers = [int(num) for num in user_input]

output = double_the_difference(numbers)

print(output)