```
def check(result):
    if result == "Correct":
        return 1
    else:
        return 0


if __name__ == "__main__":
    input_list = list(range(1, 19))
    while True:
        try:
            num1, num2, num3 = [int(input(f"Enter {i+1} number: ")) for i in range(3)]
            if min(num1, num2, num3) < 1 or max(num1, num2, num3) > 18:
                print("Invalid input. Please enter numbers from 1 to 18.")
            elif len(set([num1, num2, num3])) != 3:
                print("Invalid input. Please enter unique numbers.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter a number.")

    total_sum = num1 + num2 + num3
    if total_sum in input_list:
        result = "Correct"
    else:
        result = "Incorrect"
    print(check(result))