```
from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    result = ", ".join(map(str, strings))
    return result


if __name__ == "__main__":
    while True:
        print("Enter number of strings (0 to quit): ")
        try:
            n = int(input())
        except ValueError:
            print("Invalid input. Please enter a number.")
            continue
        if n == 0:
            break
        strings = []
        for _ in range(n):
            while True:
                user_input = input()
                if user_input.isdigit():
                    try:
                        num = int(user_input)
                        if num > 0:
                            strings.append(user_input)
                            break
                    except ValueError:
                        print("Invalid input. Please enter a positive number.")
                else:
                    strings.append(user_input)
                    break
        print(concatenate(strings))
    print(concatenate(["hello", "world"]))