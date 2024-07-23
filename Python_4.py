```
def mean_absolute_deviation(numbers=None) -> float:
    while True:
        if numbers is None:
            numbers_str = input("Enter comma-separated float values (e.g., 1,2,3): ")
            
            try:
                numbers_list = [float(num) for num in numbers_str.split(",")]
                
                if len(numbers_list) < 2:
                    mean = sum(numbers_list) / len(numbers_list)
                    result = sum([abs(num - mean) for num in numbers_list]) / len(numbers_list)
                else:
                    mean = sum(numbers_list) / len(numbers_list)
                    result = sum([abs(num - mean) for num in numbers_list]) / len(numbers_list)
                
                cont = input("Do you want to enter another set of numbers? (yes/no): ")
                if cont.lower() != "yes":
                    break
            except ValueError:
                print("Invalid input. Please enter comma-separated float values.")
        else:
            mean = sum(numbers) / len(numbers)
            result = sum([abs(num - mean) for num in numbers])
            
        return result