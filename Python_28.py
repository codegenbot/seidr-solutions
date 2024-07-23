from typing import List


def concatenate(strings: List[str]) -> str:
    return ''.join(strings)


if __name__ == "__main__":
    num_strings = int(input("Enter the number of strings you want to input: "))
    strings = []
    for i in range(num_strings):
        string = input(f"Enter string {i+1}: ")
        strings.append(string)
    result = concatenate(strings)
    print(result)