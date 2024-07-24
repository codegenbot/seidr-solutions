```
def filter_integers() -> List[int]:
    user_input = input("Enter a list of integers (separated by commas): ")
    
    try:
        num_list = [int(x) for x in user_input.split(",")]
        
        if len(num_list) != len([x for x in user_input.split(",") if x.strip()]):
            print("Invalid input. Please enter numbers separated by commas.")
            return []
        
        if all(isinstance(i, int) for i in num_list):
            even_numbers = [num for num in num_list if num % 2 == 0]
            return even_numbers
        else:
            non_integers = [value for value in set([value for value in num_list if not isinstance(value, int)])]
            print("Invalid input. The following values were not integers: ")
            for value in non_integers:
                print(f"{value}")
            return []
    except ValueError:
        print("Invalid input. Please enter numbers separated by commas.")
        return []