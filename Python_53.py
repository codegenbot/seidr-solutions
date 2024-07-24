```
def calculate_sum(a: int, b: int):
    total = add(a, b)
    print(f"Adding {a} and {b}, the result is {total}.")
    print(f"The sum of {a} and {b} is {total}.")

def add(x: int, y: int) -> int:
    result = x + y
    print(f"{x} plus {y} equals {result}.")
    return result