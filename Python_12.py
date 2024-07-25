from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = len(max(strings, key=len))
    longest_strs = [s for s in strings if len(s) == max_len]
    return longest_strs[0] if longest_strs else None


def main():
    n = ""
    while type(n) != int:
        try:
            n = int(input("Enter the number of strings: "))
        except ValueError:
            print("Invalid input. Please enter a whole number.")
    if not n:
        print("Program did not receive expected input")
        exit()
    strings = []
    for i in range(n):
        while True:
            string = input(f"Enter string {i+1}: ")
            if string:
                break
            else:
                print("Invalid input. Please enter a non-empty string.")
        strings.append(string)
    result = longest(strings)
    print("The longest string is:", result)


if __name__ == "__main__":
    main()