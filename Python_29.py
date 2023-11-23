from typing import List


def filter_by_prefix() -> List[str]:
    try:
        n = int(input("Enter the number of strings: "))
        strings = [input(f"Enter string {i+1}: ") for i in range(n)]
        prefix = input("Enter the prefix to filter by: ")
        return [s for s in strings if s.startswith(prefix)]
    except ValueError:
        print("Invalid input!")
        return []


filtered_strings = filter_by_prefix()
print(filtered_strings)