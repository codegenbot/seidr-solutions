from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

user_input = input("Enter values separated by spaces: ").split()

parsed_input = []
for item in user_input:
    try:
        parsed_input.append(int(item))
    except ValueError:
        parsed_input.append(item)

print(filter_integers(parsed_input))