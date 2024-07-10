from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    result = ", ".join(map(str, strings))
    return result


if __name__ == "__main__":
    while True:
        print("Enter number of strings (0 to quit): ")
        n = int(input())
        if n == 0:
            break
        strings = []
        for _ in range(n):
            user_input = input()
            strings.append(user_input)
        print(concatenate(strings))
    print(concatenate(["hello", "world"]))