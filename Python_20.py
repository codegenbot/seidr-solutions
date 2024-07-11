```
def find_closest_elements() -> tuple:
    numbers = []
    while True:
        try:
            num1 = float(input("Enter first number: "))
            for i2 in range(len(numbers) + 1):
                if i2 == 0:
                    num2 = num1
                else:
                    try:
                        num2 = float(input(f"Enter {i2+1}th number (or press Enter to stop): ") or num1)
                        break
                    except ValueError:
                        print("Invalid input. Please enter a valid number.")
            numbers.append(num1)
            if i2 > 0 and len(numbers) > 1:
                break
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

print(find_closest_elements())