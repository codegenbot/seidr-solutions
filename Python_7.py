```Python
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


if __name__ == "__main__":
    input_str = input("Enter a list of strings separated by comma and then press enter. Then enter the substring you want to filter by: ")
    
    strings = [s.strip() for s in input_str.split(",")]
    
    print(filter_by_substring(strings, input("Enter the substring: ")))