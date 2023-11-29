from typing import List, Tuple


def find_pairs(arr: List[int], target: int) -> List[Tuple[int, int]]:
    pairs = []
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[i] + arr[j] == target:
                pairs.append((arr[i], arr[j]))
    return pairs


arr = list(map(int, input().split()))
target = int(input())

result = find_pairs(arr, target)
for pair in result:
    print(pair[0], pair[1])