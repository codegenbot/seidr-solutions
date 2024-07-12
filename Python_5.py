def find_max_min_average():
    numbers = input("Enter a series of numbers separated by spaces: ")
    numbers = [int(num) for num in numbers.split()]

    if not numbers:
        return f"Error: Input is empty."

    max_num = max(numbers)
    min_num = min(numbers)
    average = sum(numbers) / len(numbers)

    return f"Max: {max_num}, Min: {min_num}, Average: {average}"