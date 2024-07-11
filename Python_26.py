from typing import List


def remove_duplicates() -> List[int]:
    user_input = input().split(',')
    seen = set()
    result = []
    for num in map(int, user_input):
        if str(num) not in seen:
            seen.add(str(num))
            result.append(num)
    return result