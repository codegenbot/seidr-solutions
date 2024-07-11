from typing import List


def remove_duplicates(numbers_str: str) -> List[int]:
    seen = set()
    result = []
    for num in map(int, numbers_str.split(",")):
        if str(num) not in seen:
            seen.add(str(num))
            result.append(num)
    return result


if input("Press Enter to continue...") == "":
    print(remove_duplicates(input("Enter numbers separated by commas: ")))