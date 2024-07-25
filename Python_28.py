def main():
    print(
        "Welcome to this string concatenation program! Are you ready to enter some strings? (Yes/No): "
    )
    from typing import List
    from typing import Dict
    from collections import OrderedDict

    def concatenate(strings: List[str]) -> str:
        return "".join(strings)

    if __name__ == "__main__":
        print(
            "Welcome to this string concatenation program! Are you ready to enter some strings? (Yes/No): "
        )
        ready = input().lower()

        if ready != "yes":
            print("Program terminated. Goodbye!")
        else:
            strings = []
            while True:
                try:
                    strings_num = int(input("Enter the number of strings (1-9): "))
                    if 1 <= strings_num <= 9:
                        break
                    else:
                        print("Error! Please enter a number between 1 and 9.")
                except ValueError:
                    print("Error! Please enter a valid integer.")

            for i in range(strings_num):
                while True:
                    try:
                        s = input(f"Enter string {i+1}: ")
                        if len(s) <= 80:
                            strings.append(s)
                            break
                        else:
                            print(
                                "Error! String length should be less than or equal to 80."
                            )
                    except ValueError:
                        print("Error! Please enter a valid string.")

            result_string = concatenate(strings)
            print("You entered the following strings:")
            for i in range(len(strings)):
                print(f"String {i+1}: {strings[i]}")
            print("Concatenated output: ", result_string)

            input("Press Enter to exit...")