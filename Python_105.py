```
def check_sum_in_range():
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

    total_sum = sum([num1, num2, num3])
    if (total_sum >= 17 and total_sum <= 55) or (total_sum == 15 or total_sum == 30):
        return "Correct"
    else:
        return "Incorrect"

print(check_sum_in_range())