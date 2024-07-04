from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input().strip()
    values = []
    for x in user_input.split():
        try:
            values.append(int(x))
        except ValueError:
            values.append(x)
    print(filter_integers(values))