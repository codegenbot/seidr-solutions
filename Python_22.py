```
from typing import List

def get_names() -> List[str]:
    names = []
    first_name = input("Enter your first name (or 'stop' to finish): ")
    while first_name.lower() != 'stop':
        if first_name.lower() == 'stop':
            break
        last_name = input("Enter your last name: ")
        names.append(f"{first_name} {last_name}")
        first_name = input("Enter your first name (or 'stop' to finish): ")
    return names

print(get_names())