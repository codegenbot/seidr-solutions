```
def check(input_value, input_list, total_sum):
    if input_value == "Correct":
        return f"Congratulations! The sum {total_sum} is in the list."
    else:
        return f"Sorry, the sum {total_sum} is not in the list."

if __name__ == "__main__":
    input_list = list(range(1, 19))
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    num3 = int(input("Enter the third number: "))
    total_sum = num1 + num2 + num3
    if total_sum in input_list:
        result = "Correct"
    else:
        result = "Incorrect"
    print(check(result, input_list, total_sum))