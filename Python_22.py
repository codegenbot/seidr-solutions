from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

if __name__ == "__main__":
    user_input = input("Enter a list of values separated by spaces: ").split()
    values = []
    for item in user_input:
        if item.isdigit() or (item[0] == '-' and item[1:].isdigit()):
            values.append(int(item))
        else:
            values.append(item)
    print(filter_integers(values))