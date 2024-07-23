```
while True:
    try:
        while True:
            numbers = input("Enter some numbers separated by space, or 'stop' to exit: ")
            if numbers.lower() == 'stop':
                break
            numbers_list = []
            for num in numbers.split():
                try:
                    num = float(num)
                    numbers_list.append(num)
                except ValueError:
                    print("Invalid input. Please enter valid numbers.")
            if not numbers_list:
                print("Please enter at least one number.")
    except ValueError:
        print("Invalid input. Please enter valid numbers.")