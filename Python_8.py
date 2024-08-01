import sys, ast

def sum_product() -> Tuple[int, int]:
    numbers = ast.literal_eval(sys.argv[1])
    return (sum(numbers), 1 if not numbers else 1 if 0 in numbers else 0)