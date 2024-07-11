from typing import List


def remove_duplicates() -> List[int]:
    numbers = list(map(int, "123,456,789".split(',')))
    return sorted(set(numbers))


print(remove_duplicates())