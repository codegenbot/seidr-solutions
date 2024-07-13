from typing import List


def concatenate():
    words = input("Enter words separated by space: ").split()
    if not words:
        print("No words entered.")
    else:
        result = ", ".join(map(str.lower, words))
        expected = input("Enter expected output: ")
        if result == expected.lower():
            print(f"The concatenated string is as expected: {result}")
        else:
            print(
                f"Concatenated string mismatched with the expected output. Expected: {expected}, got: {result}"
            )


concatenate()