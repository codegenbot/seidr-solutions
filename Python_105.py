```
input_list = list(range(1, 19))

def check(result):
    if result == "Correct":
        return "The answer is correct."
    else:
        return "The answer is incorrect."

def solve_task(input_list):
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    total = num1 * num2
    user_answer = int(input(f"What's the total of {num1} and {num2}? "))
    if user_answer in input_list:
        return "Correct"
    else:
        return "Incorrect"

result = solve_task(input_list)
print(check(result))