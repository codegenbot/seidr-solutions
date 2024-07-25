from typing import List

def get_names() -> List[str]:
    names = []
    while True:
        name = input("Enter a name (or 'done' if finished): ")
        if name.lower() == 'done':
            break
        names.append(name)
    return names

print(get_names())