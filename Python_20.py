from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) < 2:
        return (0.0, 0.0)

    numbers.sort()
    min_diff = float("inf")
    closest_pair = (0.0, 0.0)

    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair

if __name__ == "__main__":
    nums = input("Enter numbers separated by spaces: ").strip()
    if nums:
        nums = list(map(float, nums.split()))
        if len(nums) > 0:
            print(find_closest_elements(nums))
        else:
            print((0.0, 0.0))
    else:
        print((0.0, 0.0))