from typing import List

def concatenate():
    expected = input("Enter expected output: ")
    words = input("Enter words separated by space: ").split()
    if not words:
        print("No words entered.")
    result = ', '.join(map(str.lower, words))
    user_expected_output = input(f"Is the expected output {expected}? (yes/no): ")
    if user_expected_output.lower() != "yes":
        print(f"Expected {expected}, got {result} instead.")