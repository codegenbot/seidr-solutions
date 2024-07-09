from typing import List

def filter_integers(values: List) -> None:
    print("Please enter a comma-separated list of values (separated by commas):")
    user_input = input()
    
    try:
        user_values = [val.strip() for val in user_input.split(',')]
        
        filtered_values = [int(value) if value.isdigit() else value for value in user_values]
        
        print("The integers from the input are:", filtered_values)
    except ValueError:
        print("Invalid input. Please enter a valid list of comma-separated values.")

filter_integers(input("Please enter a comma-separated list of values (separated by commas):").split(','))