def remove_duplicates(numbers):
    unique_numbers = []

    while True:
        input_numbers.append(int(input("Enter an integer (or 'q' to quit): ")))
        
        if str(input_numbers[-1]).lower() == 'q':
            break

        if input_numbers[-1] not in unique_numbers:
            unique_numbers.append(input_numbers[-1])

    return list(unique_numbers)