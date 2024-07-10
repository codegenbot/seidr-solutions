from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if not result:
            result += string
        else:
            result += ", " + string
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
                if not user_input.replace("-", "").isalnum():
                    print("Please provide a string instead of something else.")
                else:
                    strings.append(user_input)
                    break
        print(concatenate(strings))
    if strings:  
        print(concatenate(["hello", "world"]))