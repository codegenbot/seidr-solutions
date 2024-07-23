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
            if numbers_list:
                result = rescale_to_unit(numbers_list)
                try:
                    print(result)
                except Exception as e:
                    print(f"An error occurred: {str(e)}")
    except (ValueError, TypeError):
        print("Invalid input. Please enter valid numbers.")