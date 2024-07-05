from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

if __name__ == "__main__":
    user_input = input().split()
    parsed_input = [int(x) if x.isdigit() else x for x in user_input]
    print(filter_integers(parsed_input))