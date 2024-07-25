from typing import List

def get_names() -> List[str]:
    first_name = input("Enter your first name: ")
    last_name = input("Enter your last name: ")
    return [first_name, last_name]

print(get_names())