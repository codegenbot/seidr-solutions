from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input().strip()
    values = []
    for x in user_input.split():
        if x.isdigit() or (x.startswith('-') and x[1:].isdigit()):
            values.append(int(x))
        else:
            values.append(x)
    print(filter_integers(values))