from typing import List, Optional


def longest(strings: List[str]) -> Optional[List[str]]:
    if not strings:
        return None
    max_len = len(max(strings, key=len))
    longest_strs = [s for s in strings if len(s) == max_len]
    return longest_strs


def main():
    n = int(input("Enter the number of strings: "))
    strings = []
    for i in range(n):
        while True:
            string = input(f"Enter string {i+1}: ")
            if len(string) > 0:
                strings.append(string)
                break
            else:
                print("Please enter a non-empty string. Try again.")
    result = longest(strings)
    if result is not None:
        print("The longest strings are:")
        for s in result:
            print(s)
    else:
        print("No strings were entered.")