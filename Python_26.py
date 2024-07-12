```
def remove_duplicates():
    input_numbers = input("Enter a list of integers (space-separated) or 'q' to quit: ")
    if input_numbers.lower() == 'q':
        return []
    numbers = set(input_numbers.split()) if input_numbers != '' else set()
    while True:
        user_num = input("Enter an integer (or 'q' to quit): ")
        if user_num.lower() == 'q':
            break
        try:
            numbers.add(int(user_num))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
    return list(numbers)