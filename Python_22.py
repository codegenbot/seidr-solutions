from typing import List, Any
import ast

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input().strip()
    values = [ast.literal_eval(x) for x in user_input.split()]
    print(filter_integers(values))