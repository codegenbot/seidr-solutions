from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input().strip()
    values = eval(user_input)
    print(filter_integers(values))