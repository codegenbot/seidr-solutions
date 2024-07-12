def remove_duplicates(input_numbers):
    unique_numbers = []

    while True:
        if not input_numbers: 
            break

        user_num = input_numbers.pop(0)

        if str(user_num).lower() != "q":
            if user_num not in unique_numbers:
                unique_numbers.append(user_num)
        else:
            break

    return list(set(unique_numbers))