```
input_list = list(range(1, 19))

def check(result):
    if result == "Correct":
        return "The answer is correct."
    else:
        return "The answer is incorrect."

def solve_task():
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    num3 = int(input("Enter the third number: "))
    if set([num1, num2, num3]).pop() in range(1, 19):
        return "Correct"
    else:
        return "Incorrect"

result = solve_task()
print(check(result))