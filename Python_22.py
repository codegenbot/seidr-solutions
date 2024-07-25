```
from typing import List


def get_names() -> List[str]:
    names = []
    while True:
        first_name = input("Enter your first name (or 'stop' to finish): ")
        if first_name.lower() == "stop":
            break
        last_name = input("Enter your last name: ")
        print(f"{first_name} {last_name}")
        names.append(f"{first_name} {last_name}")


names = get_names()
while True:
    print(f"Names: {', '.join(names)}")
    input("Press Enter to continue... ")
    if input("Enter 'stop' to finish (any key to continue): ").lower() == "stop":
        break