def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int):
            total_sum += num**2
        elif isinstance(num, str):
            if num.lower() == "square":
                total_sum += int(input("Enter a number: ")) ** 2
            elif num.lower() == "cube":
                total_sum += int(input("Enter a number: ")) ** 3
    return total_sum