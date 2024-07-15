while True:
    try:
        numbers = [
            int(x) for x in input("Enter the numbers separated by space: ").split()
        ]
        break
    except (ValueError, TypeError):
        print("Input error. Please enter valid input.")

res = sum(num for num in numbers if num % 2 == 0)
print(res)