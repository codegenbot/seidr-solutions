```
from typing import List


def main():
    def check(factorize: List[int]):
        if len(factorize) == 0:
            return "The list is empty."
        else:
            return str(factorize)

    factorize = input("Enter a list of integers separated by space: ").split()
    try:
        factorize = [int(i) for i in factorize]
    except ValueError:
        return "Invalid input. Please enter only integers."

    print(check(factorize))