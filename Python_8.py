```
def calculate_average_and_median() -> Tuple[float, float]:
    numbers = input("Enter numbers separated by space: ")
    try:
        numbers = [int(num) for num in numbers.split()]
    except ValueError:
        print("Invalid input. Please enter numbers separated by space.")
        return 0.0, None
    if not numbers:
        return 0.0, None
    average = sum(numbers) / len(numbers)
    sorted_numbers = sorted(numbers)
    median = (sorted_numbers[len(sorted_numbers)//2] 
             if len(sorted_numbers)%2 != 0 
             else (sorted_numbers[len(sorted_numbers)//2 - 1] + sorted_numbers[len(sorted_numbers)//2]) / 2)
    
    return average, median