from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring.lower() in s.lower()]


input_str = input(
    "Enter a list of strings (separated by commas or single-string per line): "
)
if "," in input_str:
    strings_list = [x.strip().lower() for x in input(input_str).split(",")]
else:
    strings_list = [
        x.strip().lower() for x in input(input_str.replace("\n", ",")).split(",")
    ]

substring = input("Enter a substring to search for: ").strip().lower()

result = filter_by_substring(strings_list, substring)
print("\n".join(map(str, result)))