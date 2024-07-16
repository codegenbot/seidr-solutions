from typing import List

def sort_integers(input_list: List[int]) -> List[int]:
    return sorted(input_list)

input_list = list(map(int, input().strip().split()))

print(*sort_integers(input_list))