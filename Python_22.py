from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

if __name__ == "__main__":
    user_input = input("Enter a list of values: ")
    values = []
    for item in user_input.split(","):
        try:
            item = item.strip()
            values.append(int(item))
        except ValueError:
            values.append(item)
    print(filter_integers(values))