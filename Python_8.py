Solve the following code contest problem: Python/8. Problem description: Complete the following code given the task description and function signature..
Currently, the code is 
```
def sum_product(numbers: list) -> Tuple[int, int]:
    if len(numbers) == 0:
        return (0, 1)
    else:
        return (sum(numbers), math.prod(numbers))
```
Modify the code as  The issue is that the function signature specifies `Tuple`[int, int] as the return type, but the `Tuple` class is not defined. To fix this, you can replace `Tuple` with `tuple`, which is a built-in Python class for representing immutable sequences of objects.

Here's the corrected code:
```
def sum_product(numbers: list) -> tuple[int, int]:
    if len(numbers) == 0:
        return (0, 1)
    else:
        return (sum(numbers), math.prod(numbers))
```.
You must only return correct code. Remove any triple quotes, language name or explanations.