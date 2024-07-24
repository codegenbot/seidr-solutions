input_list = list(range(1, 19))

def check(result):
    if result == "Correct":
        return "The answer is correct."
    else:
        return "The answer is incorrect."

def solve_task(input_list):
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    num3 = int(input("Enter the third number: "))
    total_sum = num1 + num2 + num3
    if total_sum in input_list:
        return "Correct"
    else:
        return "Incorrect"

result = solve_task(input_list)
print(check(result))