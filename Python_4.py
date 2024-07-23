def mean_absolute_deviation(numbers_list) -> float:
    while True:
        numbers_str = input("Enter comma-separated float values (e.g., 1,2,3): ")
        
        try:
            new_numbers_list = [float(num) for num in numbers_str.split(",")]
            
            if len(new_numbers_list) < 2:
                mean = sum(new_numbers_list) / len(new_numbers_list)
                result = sum([abs(num - mean) for num in new_numbers_list]) / len(new_numbers_list)
            else:
                mean = sum(new_numbers_list) / len(new_numbers_list)
                result = sum([abs(num - mean) for num in new_numbers_list]) / len(new_numbers_list)
            
            cont = input("Do you want to enter another set of numbers? (yes/no): ")
            if cont.lower() != "yes":
                break
        except ValueError:
            print("Invalid input. Please enter comma-separated float values.")
            
    return result

print(mean_absolute_deviation([1.0, 2.0, 3.0, 4.0, 5.0]))