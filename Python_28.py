```
from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


if __name__ == "__main__":
    num_strings = int(input("Enter number of strings to concatenate (1-10): "))
    if 1 <= num_strings <= 10:
        strings = [input(f"Enter string {i+1}: ") for i in range(num_strings)]
        print(concatenate(strings))
    else:
        print("Invalid input. Please enter a number between 1 and 10.")