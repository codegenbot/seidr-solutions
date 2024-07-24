```
def check_sum_in_range():
    while True:
        try:
            num1, num2, num3 = [int(input(f"Enter {i+1} number: ")) for i in range(3)]
            if any(i < 1 or i > 18 for i in (num1, num2, num3)) or set([num1, num2, num3]) != {num1, num2, num3}:
                print("Invalid input. Please enter numbers from 1 to 18 and three unique numbers.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter a number.")

    total_sum = sum([num1, num2, num3])
    if total_sum in range(1, 19):
        return "Correct"
    else:
        return "Incorrect"


print(check_sum_in_range())