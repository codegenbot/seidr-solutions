from typing import List

def get_names() -> List[str]:
    while True:
        try:
            first_name = input("Enter your first name: ")
            last_name = input("Enter your last name: ")
            return [f"{first_name} {last_name}"]
        except ValueError:
            print("Invalid input. Please enter valid names.")

print(get_names())