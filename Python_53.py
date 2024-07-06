def add(x, y):
    return x + y


print("Enter two numbers separated by a space: ")
user_input = input().split()

result = add(int(user_input[0]), int(user_input[1]))

print("The sum is:", result)