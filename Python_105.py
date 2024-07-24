```
input_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19]

def check(result):
    if result == "Correct":
        return "The answer is correct."
    else:
        return "The answer is incorrect."

def solve_task(input_list):
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    total = num1 * num2
    if total in input_list:
        return "Correct"
    else:
        return "Incorrect"

result = solve_task(input_list)
print(check(result))