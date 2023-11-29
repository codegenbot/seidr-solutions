from typing import List, Tuple


def find_pairs(arr: List[int], target: int) -> List[Tuple[int, int]]:
    pairs = []
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[i] + arr[j] == target:
                pairs.append((arr[i], arr[j]))
    return pairs


n = int(input("Enter the size of array: ").strip())
arr = list(map(int, input("Enter the elements of array: ").strip().split()))
target = int(input("Enter the target sum: ").strip())

result = find_pairs(arr, target)
for pair in result:
    print(pair[0], pair[1])