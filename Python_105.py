```
def check(result):
    if result == "Correct":
        return 1
    else:
        return 0


if __name__ == "__main__":
    input_list = list(range(1, 19))
    num1, num2, num3 = [int(input(f"Enter {i+1} number (1-18): ")) for i in range(3)]
    total_sum = num1 + num2 + num3
    if total_sum in input_list:
        result = "Correct"
    else:
        result = "Incorrect"
    print(check(result))