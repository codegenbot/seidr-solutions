from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


if __name__ == "__main__":
    while True:
        try:
            strings_num = int(input("Enter the number of strings (1-9): "))
            if not 1 <= strings_num <= 9:
                print("Error! Please enter a number between 1 and 9.")
            else:
                print("You entered:", strings_num)
                break
        except ValueError:
            print("Error! Please enter a valid integer.")

    if strings_num > 0:
        strings = []

        for i in range(min(9, strings_num)):
            while True:
                try:
                    s = input(f"Enter string {i+1}: ")
                    strings.append(s)
                    break
                except ValueError:
                    print("Error! Please enter a valid string.")