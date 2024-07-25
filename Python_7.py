from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


if __name__ == "__main__":
    print("Enter the list of strings (one per line):")
    input_data = []
    while True:
        line = input().strip()
        if not line:
            break
        input_data.append(line)

    print("\nEnter the substring to filter:")
    substring = input().strip()

    print("\nFiltered output:", filter_by_substring(input_data, substring))