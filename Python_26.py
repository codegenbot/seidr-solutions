```
def remove_duplicates():
    input_numbers = []
    unique_numbers = []

    while True:
        user_num = int(input("Enter an integer (or 'q' to quit): "))

        if str(user_num).lower() == 'q':
            break

        if user_num not in unique_numbers:
            unique_numbers.append(user_num)

    return list(unique_numbers)

remove_duplicates()