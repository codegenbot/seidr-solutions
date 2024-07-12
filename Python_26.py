def remove_duplicates():
    numbers = []
    while True:
        num = int(input("Enter an integer (or 'q' to quit): "))
        if str(num).lower() == 'q':
            break
        numbers.append(num)
    return list(set(numbers))