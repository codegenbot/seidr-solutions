from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

if __name__ == "__main__":
    import ast
    values = ast.literal_eval(input().strip())
    print(filter_integers(values))