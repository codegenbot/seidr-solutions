from typing import List

def filter_integers() -> None:
    values: List[Any] = []  

    while True:
        user_input = input("Enter a value (or 'done' if finished): ")        

        if user_input.lower() == 'done':
            break        

        try:
            values.append(int(user_input))
        except ValueError:
            print(f"'{user_input}' is not an integer. Skipping...")

    filtered_values: List[int] = [value for value in values if isinstance(value, int)]
    
    print("Filtered integers:", filtered_values)

filter_integers()