from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    import ast
    input_values = ast.literal_eval(input())
    print(filter_integers(input_values))